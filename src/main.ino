#include <WiFi.h>

const char* ssid = "ESP32-C3-TEST";
const char* password = "12345678";

void setup() {
  Serial.begin(115200);
  delay(1000);

  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, password);

  Serial.println("AP Started");
  Serial.println(WiFi.softAPIP());
}

void loop() {
}