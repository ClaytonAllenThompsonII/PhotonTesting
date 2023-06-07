#include <Wire.h>

Void setup() {
    Serial1.begin(9600);
}


void loop() {

    if (Serial1.available()) {
        Serial1.write(Serial.read());
    }
    delay(100)
}