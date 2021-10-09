#include <WebSocketsClient.h>
#include <WiFi.h>

 // Wifi Config
const char* ssid = "WIFI SSID";
const char* pass = "WIFI PASSWORD";

// Websocket config
const char* HOST = "192.168.1.50";
const int PORT = 4000;

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

    socket.begin(HOST, PORT, "/");
    delay(1000);

    if(socket.isConnected()){
        Serial.println("Web socket is connected");
    }
}

void loop()
{
    socket.loop();
    
    Serial.println("Sending message..\n");
    socket.sendTXT("Test!");
    socket.loop();

    delay(1000);
}   
