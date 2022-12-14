#include <iostream>
#include <chrono>
#include <ctime>    

int main()
{
    auto start = std::chrono::system_clock::now();
    // Some computation here
    system("pause");
    auto end = std::chrono::system_clock::now();
 
    std::chrono::duration<double> elapsed_seconds = end-start;
    //std::time_t end_time = std::chrono::system_clock::to_time_t(end);
 
    std::cout 
              << "elapsed time: " << elapsed_seconds.count() << "s"
              << std::endl;
    system("pause");
}