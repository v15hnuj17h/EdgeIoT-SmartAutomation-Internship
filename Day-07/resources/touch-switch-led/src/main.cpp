#include <Arduino.h>

#define TOUCH_PIN 4      // GPIO4
#define LED_PIN 1       // Built-in LED (change if needed)

void setup() {
    pinMode(TOUCH_PIN, INPUT_PULLUP); // Internal pull-up
    pinMode(LED_PIN, OUTPUT);

    digitalWrite(LED_PIN, HIGH);
}

void loop() {
    // GPIO4 reads LOW when connected to GND
    if (digitalRead(TOUCH_PIN) == HIGH) {
        digitalWrite(LED_PIN, LOW); // LED ON
    } else {
        digitalWrite(LED_PIN, HIGH);  // LED OFF
    }

    delay(10);
}