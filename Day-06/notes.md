# ESP32 Notes

## What is ESP32?

ESP32 is a low-cost microcontroller developed by Espressif Systems with built-in Wi-Fi and Bluetooth capabilities.

## Key Features

* Dual-Core Processor
* Wi-Fi Support
* Bluetooth & BLE
* Multiple GPIO Pins
* PWM Support
* ADC and DAC
* Low Power Modes
* Suitable for IoT Applications

## Program Structure

Every Arduino-based ESP32 program contains:

```cpp
void setup() {
    // Runs once
}

void loop() {
    // Runs continuously
}
```

## Program 1 - LED Blink

```cpp
#define led 4

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    digitalWrite(led, LOW);
    delay(100);

    digitalWrite(led, HIGH);
    delay(100);
}
```

### Learning

* pinMode() configures GPIO pins.
* digitalWrite() controls pin state.
* delay() pauses execution.

---

## Program 2 - Serial Output

```cpp
void setup() {
    Serial.begin(115200);
}

void loop() {
    Serial.print("Hello, World!");
    delay(500);
}
```

### Learning

* Serial.begin() initializes serial communication.
* Serial.print() sends data to Serial Monitor.

---

## Program 3 - Variable Increment

```cpp
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
```

### Learning

* Variables store data.
* Serial.println() prints data with a new line.
* Values can be updated during execution.

---

## Program 4 - Serial Controlled LED

Commands:

* ON
* OFF

### Learning

* Serial.available() checks incoming data.
* Serial.readStringUntil() reads user input.
* LED state can be controlled through serial commands.

---

## Program 5 - PWM LED Fade

```cpp
ledcSetup(PWM_CHANNEL, PWM_FREQ, PWM_RESOLUTION);
ledcAttachPin(LED_PIN, PWM_CHANNEL);
```

### Learning

* PWM controls LED brightness.
* Duty cycle determines brightness level.
* ESP32 provides hardware PWM support.

## Important Concepts Learned

### GPIO

General Purpose Input Output pins used to connect sensors and actuators.

### Serial Communication

Communication between ESP32 and computer through USB.

### PWM (Pulse Width Modulation)

Technique used to control brightness, speed, and power by varying signal duty cycle.

## Challenges Faced

* Package installation issues in PlatformIO.
* Understanding project structure and board configuration.
* Learning how code is uploaded and monitored through PlatformIO.

## Key Takeaway

The practical session provided a good introduction to ESP32 programming and helped build confidence in working with embedded systems and IoT development.
