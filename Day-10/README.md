# Day 10 - TinyML with Edge Impulse

## Date

27 June 2026

## Objective

Learn the complete TinyML workflow by collecting motion sensor data from an MPU6050 using ESP32, training a machine learning model in Edge Impulse, and deploying it back to the microcontroller.

## Topics Covered

* Digital Signal Processing (DSP)
* Fourier Transform
* Importance of Optimization in TinyML
* MPU6050 Data Collection
* Dataset Preparation
* Edge Impulse Studio
* Spectral Feature Extraction
* Motion Classification
* Model Deployment

## Activities Performed

* Learned the basics of DSP, Fourier Transform, and optimization.
* Collected accelerometer data from an MPU6050 using ESP32.
* Recorded serial output into CSV files using PlatformIO.
* Cleaned and formatted datasets using Microsoft Excel.
* Converted datasets to UTF-8 encoding.
* Created a new project in Edge Impulse Studio.
* Uploaded datasets using the CSV Wizard.
* Configured an impulse with Spectral Analysis and Classification blocks.
* Generated optimized features using Auto Tune.
* Trained a motion classification model.
* Deployed the trained model as an Arduino library.
* Integrated the exported library into a PlatformIO project.
* Performed real-time gesture classification on ESP32 using FreeRTOS.

## Motion Classes

* idle
* left-right
* up-down
* nothing

## Learning Outcomes

* Understood the complete TinyML development workflow.
* Learned how raw accelerometer signals are converted into machine learning features.
* Built a complete pipeline from data acquisition to real-time inference on ESP32.
* Gained practical experience with Edge Impulse deployment.

## Summary

Today's session introduced the complete TinyML workflow. Starting with collecting motion data from an MPU6050, I prepared datasets, trained a classifier in Edge Impulse, and deployed the model back to an ESP32 for real-time gesture recognition.
