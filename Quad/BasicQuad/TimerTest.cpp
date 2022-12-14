#include <iostream>
#include "Timer.h"
#define DEADLINE 10

int main(){

    Timer clock;

    clock.startTimer();
    std::cout << "Waiting..." << std::endl;
    system("pause");
    clock.endTimer();
    double Delay = clock.delay_ms(DEADLINE);
    system("pause");

    return 0;
}