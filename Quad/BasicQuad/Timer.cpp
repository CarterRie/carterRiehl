#include "Timer.h"

    void Timer::startTimer(){
        startTime = std::chrono::system_clock::now();
    }

    void Timer::endTimer(){
        endTime = std::chrono::system_clock::now();
    }

    double Timer::delay_ms(double DL){
        deadline = DL;

        std::chrono::duration<double> elapsed_time = endTime - startTime;

        //if((deadline - elapsed_time.count()) > 0){
            delayTime = deadline - elapsed_time.count();
            //delay(delayTime);
            std::cout << "Delay time by: " << std::fixed << delayTime << std::setprecision(5) << std::endl;
        //}
            return delayTime;
    }
