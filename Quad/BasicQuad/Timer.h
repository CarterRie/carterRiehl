#ifndef TIMER_H
#define TIMER_H

//#include <Adafruit_MPU6050.h>
//#include <Adafruit_Sensor.h>
#include <iostream>
#include <bits/stdc++.h>

class Timer
{
    private:
        std::chrono::system_clock::time_point startTime, endTime;
        double delayTime;
        double deadline;

    public:
        void startTimer();

        void endTimer();

        double delay_ms(double deadline);

};

#endif