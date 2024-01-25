#ifndef ADXL354_H
#define ADXL354_H

#include <Wire.h>

class ADXL354 {
public:
    ADXL354();
    bool begin();
    void readXYZ(int16_t &x, int16_t &y, int16_t &z);

private:
    // Add any private variables or functions here
};

#endif
