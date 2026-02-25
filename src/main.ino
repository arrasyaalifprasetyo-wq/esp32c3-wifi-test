#include <WiFi.h>

const char* ssid = "ESP32-C3-TEST";
const char* password = "12345678";

void setup() {
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);
}

void loop() {}