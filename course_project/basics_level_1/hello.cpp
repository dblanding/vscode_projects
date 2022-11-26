#include <iostream>

int main()
{
    const int seconds_per_hour = 3600;
    const double maximum_allowed_temperature = 76.8;

    seconds_per_hour = 3000;

    std::cout << seconds_per_hour << std::endl;
    std::cout << maximum_allowed_temperature << std::endl;
    return 0;
}