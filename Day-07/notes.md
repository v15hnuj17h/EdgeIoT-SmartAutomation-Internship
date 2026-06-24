# ESP32 Advanced Programming Notes

## Direct Register Access

Instead of using digitalWrite(), ESP32 GPIO registers can be controlled directly.

### Set Pin HIGH

```cpp
GPIO.out_w1ts = (1 << pin);
```

### Set Pin LOW

```cpp
GPIO.out_w1tc = (1 << pin);
```

### Benefits

* Faster execution
* Lower overhead
* Useful for time-critical applications

---

## FreeRTOS Multitasking

ESP32 contains two CPU cores:

* Core 0 (PRO_CPU)
* Core 1 (APP_CPU)

Tasks can be assigned to specific cores.

Example:

```cpp
xTaskCreatePinnedToCore(
    taskFunction,
    "TaskName",
    2048,
    NULL,
    1,
    NULL,
    0
);
```

### Learning

* Multiple tasks can run simultaneously.
* Each task executes independently.

---

## Hardware Timers and Interrupts

Hardware timers generate periodic events without blocking the CPU.

### Interrupt Service Routine

```cpp
void IRAM_ATTR onTimer() {
    isr_counter++;
}
```

### Learning

* Interrupts execute automatically when triggered.
* Useful for precise timing operations.

---

## Volatile Variables

```cpp
volatile bool stopCounting = false;
```

### Purpose

Tells the compiler that a variable may change unexpectedly outside normal program flow.

Commonly used with:

* Interrupts
* Shared variables between tasks
* Multi-core programming

---

## Touch Input and Digital Reading

```cpp
digitalRead(TOUCH_PIN);
```

Used to detect input signals and trigger actions.

---

## Relay Control

A relay allows a low-voltage microcontroller to control higher-power devices.

### Components

* ESP32
* Relay Module
* Power Supply
* Load Device

### Working Principle

```text
ESP32 GPIO
      ↓
Relay Module
      ↓
External Device
```

### Applications

* Home Automation
* Smart Switches
* IoT Control Systems
* Industrial Automation

---

## Key Concepts Learned

* Direct Register Programming
* FreeRTOS Task Scheduling
* Multi-Core Processing
* Hardware Interrupts
* Volatile Variables
* Relay-Based Device Control

## Key Takeaway

The session provided a deeper understanding of how ESP32 operates internally and how advanced programming techniques can be used to build responsive and efficient embedded systems.
