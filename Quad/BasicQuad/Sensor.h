#ifndef SENSOR_H
#define SENSOR_H

#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include "Wire.h"

#define I2C_SDA 21
#define I2C_SCL 22

class Sensor {
    // declarations go here!
    // So does data.


    private:
        sensors_event_t a, g, temp;

    public:

        sensors_event_t getData() { return a, g, temp;}

};

#endif