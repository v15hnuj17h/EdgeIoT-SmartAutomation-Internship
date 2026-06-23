#include <Arduino.h>

const int LED_PIN = 4;

void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);

    digitalWrite(LED_PIN, LOW);

    Serial.println("ESP32 Ready");
    Serial.println("Type ON or OFF and press Enter");
}

void loop() {
    if (Serial.available()) {
        String cmd = Serial.readStringUntil('\n');
        cmd.trim();

        // Show what was received
        Serial.print("You typed: ");
        Serial.println(cmd);

        if (cmd.equalsIgnoreCase("on")) {
            digitalWrite(LED_PIN, HIGH);
            Serial.println("LED is now ON");
        }
        else if (cmd.equalsIgnoreCase("off")) {
            digitalWrite(LED_PIN, LOW);
            Serial.println("LED is now OFF");
        }
        else {
            Serial.println("Invalid command! Type ON or OFF");
        }

        Serial.println();
    }
}