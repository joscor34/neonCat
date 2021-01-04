#include<Encoder.h>

Encoder myEnc(8,9);

byte contador;

void setup() {
  // put your setup code here, to run once:
/*pinMode(4,INPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,INPUT);
pinMode(A0,INPUT);*/
Serial.begin(9600);
}

long oldPosition = -999;

void loop() {
  long newPosition = myEnc.read() / 4;
  if(newPosition != oldPosition){
    if(newPosition < oldPosition){
      contador --;
    }
    if(newPosition > oldPosition){
      contador ++;
    }
    oldPosition = newPosition;
    if(contador < 1){
      contador = 1;
    } 
    else if(contador > 3){
      contador = 3;
    }
    Serial.println(contador);
  }

/*int lectura_pot = analogRead(A0);
bool btn = digitalRead(10);
int menu = mapeo(lectura_pot, 6);
Serial.println(btn);
switch (menu){
  case 0:
    digitalWrite(4,1);
    digitalWrite(6,0);
    digitalWrite(7,0);
    digitalWrite(8,0);
    digitalWrite(9,0);
    if(btn == 1){
      on_off();
    }
    
    break;
 case 1:
    digitalWrite(6,1);
    digitalWrite(4,0);
    digitalWrite(7,0);
    digitalWrite(8,0);
    digitalWrite(9,0);
    if(btn == 1){
      vol_up();
    }
    break;
 case 2:
    digitalWrite(4,0);
    digitalWrite(6,0);
    digitalWrite(7,1);
    digitalWrite(8,0);
    digitalWrite(9,0);
    if(btn == 1){
      vol_down();
    }
    break;
 case 3:
    digitalWrite(4,0);
    digitalWrite(6,0);
    digitalWrite(7,0);
    digitalWrite(8,1);
    digitalWrite(9,0);
    if(btn == 1){
      chn_up();
    }
    break;
 case 4:
    digitalWrite(4,0);
    digitalWrite(7,0);
    digitalWrite(8,0);
    digitalWrite(6,0);
    digitalWrite(9,1);
    if(btn == 1){
      chn_down();
    }
    break;
 case 6:
    digitalWrite(4,0);
    digitalWrite(7,0);
    digitalWrite(8,0);
    digitalWrite(6,0);
    digitalWrite(9,0);
    if(btn == 1){
      ejecute();
    }
}
*/
}

int mapeo(int valor_entrada, byte valor_salida){
 return map(valor_entrada, 0, 1023, 0, valor_salida);
}
