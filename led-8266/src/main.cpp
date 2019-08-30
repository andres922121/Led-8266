#include <Arduino.h>


int LED = 2 ;

void setup() {
pinMode(LED ,OUTPUT);
digitalWrite(LED ,1);

}

void loop() {

  Serial.begin(9600);
  
   digitalWrite(LED , 0);
   delay(500);
   digitalWrite(LED , 1);
   delay(500);
}