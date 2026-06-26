# Day 8 - Firebase Dashboard and ESP32 Relay Control

## Date

25 June 2026

## Objective

Build a cloud-based dashboard using Firebase Hosting and Firebase Realtime Database to remotely control a relay connected to an ESP32.

## Topics Covered

* Firebase Hosting
* Firebase Realtime Database
* Firebase Web SDK
* ESP32 Wi-Fi Communication
* HTTP GET Requests
* Cloud-Based Device Control

## Activities Performed

* Created a web dashboard using HTML, CSS, and JavaScript.
* Configured Firebase Hosting and deployed the dashboard.
* Connected the dashboard to Firebase Realtime Database.
* Used buttons on the webpage to update values in the database.
* Programmed the ESP32 to periodically read the database using HTTPS requests.
* Controlled a relay/LED connected to the ESP32 based on the database value.

## Project Workflow

```text
Web Dashboard
      ↓
Firebase Realtime Database
      ↓
ESP32 (Wi-Fi)
      ↓
Relay / LED
```

## Dashboard URL
```
https://internproject-7df3f.web.app/
```
## Learning Outcomes

* Learned how Firebase Realtime Database synchronizes data in real time.
* Understood how web applications and embedded devices can communicate through the cloud.
* Learned to deploy a web application using Firebase Hosting.
* Built a simple IoT project that connects a web interface with hardware.

## Summary

Today's session combined web development, cloud services, and embedded systems. I successfully built a Firebase-hosted dashboard that updates a Realtime Database, allowing an ESP32 to read the changes over Wi-Fi and control a relay remotely.
