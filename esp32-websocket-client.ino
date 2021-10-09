#include <WebSockets.h>
#include <WebSocketsClient.h>
#include <WiFi.h>

 // Wifi Config
const char* ssid = "WIFI SSID";
const char* pass = "WIFI PASSWORD";


WebSocketsClient socket;

void setup()
{
    Serial.begin(9600);

    WiFi.begin(ssid, pass);

    Serial.println("Connecting...");
    while(WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("Connected");
    Serial.println(WiFi.localIP());

}

void loop()
{
}
