# Firebase Dashboard and ESP32 Notes

## Project Overview

The project allows a webpage hosted on Firebase Hosting to control a relay connected to an ESP32.

Workflow:

```text
User
   ↓
HTML Dashboard
   ↓
Firebase Realtime Database
   ↓
ESP32 (HTTPS Polling)
   ↓
Relay / LED
```

---

## Firebase Services Used

### Firebase Hosting

Hosts the HTML dashboard online.

### Firebase Realtime Database

Stores the current relay state.

Example:

```json
{
  "led_state": 1
}
```

where

* 1 = ON
* 0 = OFF

---

## Web Dashboard

The dashboard was built using

* HTML
* CSS
* JavaScript
* Firebase Web SDK

Functions:

* Display current relay status
* Toggle relay ON/OFF
* Update Firebase Realtime Database instantly

Main Firebase methods:

```javascript
initializeApp()
getDatabase()
ref()
set()
onValue()
```

---

## ESP32 Program

Libraries Used

```cpp
#include <WiFi.h>
#include <HTTPClient.h>
#include <WiFiClientSecure.h>
```

### Wi-Fi Connection

ESP32 connects to the local Wi-Fi network before accessing Firebase.

---

### HTTPS Polling

ESP32 periodically sends an HTTPS GET request to

```text
https://project-id-default-rtdb.firebaseio.com/led_state.json
```

The returned value determines whether the relay should be ON or OFF.

---

## Relay Logic

If database value is

```text
1 → Relay ON

0 → Relay OFF
```

The ESP32 continuously checks the database every 1.5 seconds.

---

## Firebase Deployment

Deployment Steps

1. Create Firebase Project
2. Enable Realtime Database
3. Configure Firebase Web SDK
4. Build Dashboard
5. Deploy using

```bash
firebase deploy
```

---

## Key Concepts Learned

* Firebase Hosting
* Firebase Realtime Database
* Web and ESP32 communication
* HTTPS requests
* Cloud-controlled IoT
* Remote relay control

## Key Takeaway

This was my first complete IoT application connecting a web dashboard, Firebase cloud services, and an ESP32. It demonstrated how cloud platforms can be used to monitor and control hardware devices remotely in real time.
