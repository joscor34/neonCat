//#include<Encoder.h>

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

#define OLED_RESET     4
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


//Encoder myEnc(8,9);

//byte contador;

void setup() {
 Serial.begin(9600);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); 
  }
  display.display();
  delay(2000); 


  display.clearDisplay();


  display.drawPixel(10, 10, SSD1306_WHITE);
  
  display.display();
  delay(2000);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.println(F("alv"));
  display.display();  
}

//long oldPosition = -999;

void loop() {}
  
  
  
 /* long newPosition = myEnc.read() / 4;
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
  }*/
