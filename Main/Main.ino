#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define GREEN     0x07E0

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET     4
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
 pinMode(A1,INPUT);
 Serial.begin(9600);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); 
  }
  display.display();
  delay(2000);  
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.println(F("Iniciando"));
  display.display();
  delay(1000);
  display.clearDisplay();
}
int oldPosition = -30;
int newPosition = 0;

void loop() {
  int lectPot = analogRead(A1);
  newPosition = mapeoPot(lectPot);
  if(newPosition != oldPosition){
    oldPosition = newPosition;
    //Serial.println(mapeoPot(lectPot));
    pixelPosition(mapeoPot(lectPot));
  }
}

int mapeoPot(int entrada){
  int salida = map(entrada, 0, 1023, 1, 4);
  return salida;
}

void pixelPosition(byte posicion){
  Serial.print("La posicion es: ");
  Serial.println(posicion);
  switch(posicion){
    case 1:
      display.clearDisplay();
      display.setCursor(20,0);
      display.setTextSize(2);
      display.setTextColor(SSD1306_WHITE);
      display.println("Menu UwU");
      display.setCursor(20,20);
      display.println("BAD USB");
      display.setCursor(20,35);
      display.println("IR hack");
      display.setCursor(20,50);
      display.println("RF hack");
      display.setCursor(1,20);
      display.setTextSize(2);
      display.setTextColor(SSD1306_WHITE);
      display.println(">");
      display.display();
     break;
     case 2:
      display.clearDisplay();
      display.setCursor(20,0);
      display.setTextSize(2);
      display.setTextColor(SSD1306_WHITE);
      display.println("Menu UwU");
      display.setCursor(20,20);
      display.println("BAD USB");
      display.setCursor(20,35);
      display.println("IR hack");
      display.setCursor(20,50);
      display.println("RF hack");
      display.setCursor(1,35);
      display.setTextSize(2);
      display.setTextColor(SSD1306_WHITE);
      display.println(">");
      display.display();
     break;
     case 3:
      display.clearDisplay();
      display.setCursor(20,0);
      display.setTextSize(2);
      display.setTextColor(SSD1306_WHITE);
      display.println("Menu UwU");
      display.setCursor(20,20);
      display.println("BAD USB");
      display.setCursor(20,35);
      display.println("IR hack");
      display.setCursor(20,50);
      display.println("RF hack");
      display.setCursor(1,50);
      display.setTextSize(2);
      display.setTextColor(SSD1306_WHITE);
      display.println(">");
      display.display();
     break;
  }
}
