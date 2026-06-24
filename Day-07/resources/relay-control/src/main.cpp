#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "ESP32_LED";
const char* password = "12345678";

WebServer server(80);

#define LED_PIN 2

// PWM settings
const int PWM_CHANNEL = 0;
const int PWM_FREQ = 5000;
const int PWM_RESOLUTION = 8;

int brightness = 0;

void handleRoot()
{
  String html = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>ESP32 LED Dimmer</title>

<style>
body{
  font-family:Arial;
  text-align:center;
  margin-top:50px;
}
.slider{
  width:80%;
}
</style>

</head>
<body>

<h2>ESP32 LED Brightness Control</h2>

<p>Brightness: <span id="value">0</span></p>

<input type="range"
       min="0"
       max="255"
       value="0"
       class="slider"
       oninput="setBrightness(this.value)">

<script>
function setBrightness(val)
{
  document.getElementById('value').innerHTML = val;
  fetch('/set?value=' + val);
}
</script>

</body>
</html>
)rawliteral";

  server.send(200, "text/html", html);
}

void handleSet()
{
  if (server.hasArg("value"))
  {
    brightness = constrain(server.arg("value").toInt(), 0, 255);

    // Write PWM duty cycle
    ledcWrite(PWM_CHANNEL, brightness);

    Serial.print("Brightness: ");
    Serial.println(brightness);
  }

  server.send(200, "text/plain", "OK");
}

void setup()
{
  Serial.begin(115200);

  // Configure PWM
  ledcSetup(PWM_CHANNEL, PWM_FREQ, PWM_RESOLUTION);
  ledcAttachPin(LED_PIN, PWM_CHANNEL);
  ledcWrite(PWM_CHANNEL, 0);

  // Start Access Point
  WiFi.softAP(ssid, password);

  Serial.println();
  Serial.print("IP Address: ");
  Serial.println(WiFi.softAPIP());

  server.on("/", handleRoot);
  server.on("/set", handleSet);

  server.begin();

  Serial.println("Web server started");
}

void loop()
{
  server.handleClient();
}