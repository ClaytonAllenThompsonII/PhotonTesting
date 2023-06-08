#include "Particle.h"

void setup() {

Serial.begin(9600); 


}

void loop() {
// Test Connection between Photon and OpenScale
if Serial1.available()) {
    Serial.write(Serial1.read()); 
}



//Connect to guest Wi-Fi network
if (Wifi.ready()) {
    Serial.println("Connected to Wi-Fi network!")
} else{
    Serial.println("Failed to connect to Wi-Fi network!")
}
delay(100)

}
