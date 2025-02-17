/*
  TouchRead by Everything2067.
  Reads a touch-compatible pin of the ESP32 and outputs it to the Serial Monitor.
*/

// Including the required library.
#include <Arduino.h>

// Defining pre-set values. You can change them to your needs.
#define TOUCH_PIN 4
#define DELAY     10

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print(touchRead(TOUCH_PIN));
  delay(DELAY);
}