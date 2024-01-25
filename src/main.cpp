#include <Arduino.h>
#include <ADXL354.h>

ADXL354 adxl;

void setup() {
    Serial.begin(9600);
    Wire.begin();

    if (adxl.begin() == false) {
        Serial.println("ADXL354 not found. Please check your wiring.");
        while (1);
    }

    Serial.println("ADXL354 initialized successfully!");
}

void loop() {
    int16_t x, y, z;

    // Read accelerometer data
    adxl.readXYZ(x, y, z);

    // Print the values
    Serial.print("X-axis: ");
    Serial.print(x);
    Serial.print("\tY-axis: ");
    Serial.print(y);
    Serial.print("\tZ-axis: ");
    Serial.println(z);

    delay(1000); // Adjust the delay as needed
}
