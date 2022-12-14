// Write all function bodies for Sensor here!
#include "Sensor.h"

class Sensor{
    private:

    public:
        
        Sensor::Sensor(Adafruit_MPU6050 mpu_m, TwoWire I2CMPU_m = TwoWire(0))
        {
            mpu = mpu_m;
            I2CMPU = I2CMPU_m;

            Serial.begin(115200);
            while (!Serial){
                delay(10); // will pause Zero, Leonardo, etc until serial console opens
            }

            Serial.println("Adafruit MPU6050 test!");

            Serial.println("Initializing TwoWire objecto for I2C...");

            I2CMPU.begin(I2C_SDA, I2C_SCL);

            // Try to initialize!
            if (!mpu.begin(0x68, &I2CMPU)) {
                Serial.println("Failed to find MPU6050 chip");
                while (1) {
                    delay(10);
                }
            }
            Serial.println("MPU6050 Found!");

            mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
            
            mpu.setGyroRange(MPU6050_RANGE_500_DEG);

            mpu.setFilterBandwidth(MPU6050_BAND_260_HZ);

            
        }


        sensors_event_t Sensor::getData(Adafruit_MPU6050 mpu)
            {
            mpu.getEvent(&a, &g, &temp);
            }

        
}
