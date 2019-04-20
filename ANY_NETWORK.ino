#include "ESP8266WiFi.h"
int n;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
 
  n = WiFi.scanNetworks();
  Serial.println("number Of Networks Available: ");
      Serial.println(n);
 
  for(int i =0; i<n; i++){
 
      Serial.println("WiFi name: ");
      Serial.println(WiFi.SSID(i));
      Serial.print("Signal Strength: ");
      Serial.println(WiFi.RSSI(i));
      Serial.println("-----------------------");
      
 
  }
}



void loop() {
  // put your main code here, to run repeatedly:

    n = WiFi.scanNetworks();
  for(int i =0; i<n; i++){
 
      Serial.println("WiFi name: ");
      Serial.println(WiFi.SSID(i));
      Serial.print("Signal Strength: ");
      Serial.println(WiFi.RSSI(i));
      Serial.println("-----------------------");
      
 
  }
  delay(10000);

}
