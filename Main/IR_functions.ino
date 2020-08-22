#include <IRremote.h>

IRsend irsend;

void on_off() {
  unsigned long tData = 0xa90;
  irsend.sendSony(tData, 12);
  Serial.print(F("sendSony(0x"));
  Serial.print(tData,HEX);
  Serial.println(F(", 12)"));
  delay(40);
}


void vol_up() {
  unsigned long tData = 0x490;
  irsend.sendSony(tData, 12);
  Serial.print(F("sendSony(0x"));
  Serial.print(tData,HEX);
  Serial.println(F(", 12)"));
  delay(40);
}


void vol_down() {
  unsigned long tData = 0xc90;
  irsend.sendSony(tData, 12);
  Serial.print(F("sendSony(0x"));
  Serial.print(tData,HEX);
  Serial.println(F(", 12)"));
  delay(40);
}

void chn_up() {
  unsigned long tData = 0x90;
  irsend.sendSony(tData, 12);
  Serial.print(F("sendSony(0x"));
  Serial.print(tData,HEX);
  Serial.println(F(", 12)"));
  delay(40);
}


void chn_down() {
  unsigned long tData = 0x890;
  irsend.sendSony(tData, 12);
  Serial.print(F("sendSony(0x"));
  Serial.print(tData,HEX);
  Serial.println(F(", 12)"));
  delay(40);
}
