#include <ESP8266WiFi.h>

const char* ssid= "wifi username";
const char* password= "wifi password";

WiFiServer server(80);
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
Serial.print("CONNECTING TO");

WiFi.begin(ssid,password);
while (WiFi.status() != WL_CONNECTED)
{
  delay(400);
  Serial.print("-");
}
Serial.println("");
Serial.println("WIFI CONNECTED!");


}

void loop() {
  // put your main code here, to run repeatedly:

}
