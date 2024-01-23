#include <iostream>
#include <chrono>

int main()
{
    std::chrono::microseconds micro(1000);

    std::cout << "duration (in periods): ";
    std::cout << micro.count() << " microseconds." << std::endl;

    std::cout << "duration (in seconds): ";
    std::cout << static_cast<float>(micro.count()) * std::chrono::microseconds::period::num / std::chrono::microseconds::period::den;
    std::cout << " seconds.\n";

    return 0;
}

