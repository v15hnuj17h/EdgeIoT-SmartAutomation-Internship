#include <Arduino.h>

const int LED_PIN = 4;

// PWM settings
const int PWM_CHANNEL = 0;
const int PWM_FREQ = 5000;      // 5 kHz
const int PWM_RESOLUTION = 8;   // 8-bit (0-255)

void setup() {
    Serial.begin(115200);

    ledcSetup(PWM_CHANNEL, PWM_FREQ, PWM_RESOLUTION);
    ledcAttachPin(LED_PIN, PWM_CHANNEL);
}

void loop() {
    // Fade in
    for (int duty = 0; duty <= 255; duty++) {
        ledcWrite(PWM_CHANNEL, duty);
        delay(10);
    }

    // Fade out
    for (int duty = 255; duty >= 0; duty--) {
        ledcWrite(PWM_CHANNEL, duty);
        delay(10);
    }
}