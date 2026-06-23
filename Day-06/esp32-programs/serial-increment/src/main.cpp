#include <Arduino.h>

int a = 10;

void setup() {
  Serial.begin(115200);
  
}

void loop() {
  Serial.print("Current value of a = ");
  Serial.println(a);
  a++;
  delay(500);
} 