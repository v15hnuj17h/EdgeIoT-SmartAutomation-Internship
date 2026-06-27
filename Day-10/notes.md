# TinyML and Edge Impulse Notes

## Concepts Learned

### Digital Signal Processing (DSP)

DSP processes raw sensor signals before they are used for machine learning.

### Fourier Transform

Transforms time-domain signals into the frequency domain, helping identify repeating patterns.

### Optimization

Optimizing TinyML models reduces memory usage, computation time, and power consumption on embedded devices.

---

## Hardware Used

* ESP32
* MPU6050 Accelerometer & Gyroscope

---

## Data Collection

A custom ESP32 program sampled accelerometer data at **100 Hz**.

Steps:

1. Initialize MPU6050.
2. Calibrate the sensor to remove gravity offsets.
3. Read X, Y, and Z acceleration values.
4. Print timestamp and sensor values through Serial Monitor.

Example output:

```text
timestamp_ms,X,Y,Z
0,-0.012,0.024,0.005
10,-0.010,0.018,0.004
20,-0.011,0.022,0.003
```

---

## Recording Dataset

PlatformIO monitor output was redirected directly into CSV files.

Commands used:

```powershell
pio device monitor > nothing.csv

platformio device monitor --environment esp32dev > updown.csv
```

Datasets collected:

* idle
* nothing
* left-right
* up-down

---

## Dataset Preparation

* Open CSV in Excel.
* Convert a single column into multiple columns.
* Add column headers.
* Save the file.
* Convert encoding to UTF-8.

---

## Edge Impulse Workflow

1. Create Project
2. Upload CSV Dataset
3. Configure Labels
4. Create Impulse
5. Spectral Analysis
6. Feature Generation (Auto Tune)
7. Train Classifier
8. Deploy Arduino Library

---

## Real-Time Inference

The exported Edge Impulse library was added to the PlatformIO project.

The inference program:

* Continuously samples MPU6050 data.
* Uses double buffering for uninterrupted sampling.
* Runs data collection on one ESP32 core.
* Executes machine learning inference on the second core.
* Predicts one of four motion classes.

Predicted classes:

* idle
* left-right
* up-down
* nothing

The predicted gesture controls LEDs connected to the ESP32.

---

## Key Concepts

* Sensor Calibration
* Sampling at 100 Hz
* FreeRTOS Dual-Core Programming
* Double Buffering
* Spectral Feature Extraction
* TinyML Inference
* Edge Impulse Deployment

## Key Takeaway

This session demonstrated a complete TinyML pipeline—from collecting raw motion data with an MPU6050 to running a trained machine learning model in real time on an ESP32 using Edge Impulse.
