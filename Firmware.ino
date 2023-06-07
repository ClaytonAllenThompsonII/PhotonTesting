#include <Wire.h>
#include <OpenScale.h>
#include <HX711.h>


// Define the calibration factor for your load sensor
const float CALIBRATION_FACTOR = -1760;

long setting_tare_point; //Zero value that is found when scale is tared
const byte statusLED = 13;  //Flashes with each reading



Void setup() {

    Wire.setSpeed(100000); //Default 100,000 Hz
    Wire.begin(); 
    //Setup UART connection
    Serial1.begin(9600);
}


void loop() {

    if (Serial1.available()) {
        Serial1.write(Serial.read());
    }
    delay(100)
}