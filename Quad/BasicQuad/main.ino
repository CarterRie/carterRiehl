#include "Sensor.h"
#include <chrono>

//reinstall arduino and arduino libraries

#define REFRESH_RATE 1000
#define DEADLINE 1 / REFRESH_RATE

MotorCommand_t runControlAlgo(SensorShit_t);

void setup()
{
    Timer clock;
}

void loop()
{
    // where do we start
    int start_time = clock.getTime();

    // where the fuck are we anyway?
    RawSensor_t raw_sensor_inputs = getSensorInputs();

    // mkay what does that mean?
    SensorShit_t calibrated_sensor_inputs = processSensors(raw_sensor_inputs);

    // math baybeeeeeeeee
    MotorCommands_t motor_commands = runControlAlgo(calibrated_sensor_inputs);

    // make motors do shit
    setMotors(motor_commands);

    // make sure we run on a defined rate
    int end_time = clock.getTime()
    void clock.delay_ms(DEADLINE, start_time, end_time)
}

struct Attitude_t
{
    float pitch;
    float roll;
    float yaw;
}

MotorCommand_t
runControlAlgo(SensorShit_t my_sensor_data)
{
    Attitude_t desired = getDesiredAttitude();
    Attitude_t current = calculateCurrentAttitude(my_sensor_data);

    Attitude_t error = desired - current;

    return convertMotorCommands(error);
}