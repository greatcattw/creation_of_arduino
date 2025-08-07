#include <Wire.h>
#include <Adafruit_MCP4725.h>

Adafruit_MCP4725 dac;

void setup() {
  // put your setup code here, to run once:
  dac.begin(0x60);
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  //dac.setVoltage(0, false);
  //delay(2000);
  //dac.setVoltage(4095, false);
  //delay(2000);
  dac.setVoltage(random(4096), false);
  delay(500);
  
}
