#include <iostream>

int main()
{
    int number1;
    int number2;
    std::cout << "Enter an integer number: ";
    std::cin >> number1;
    std::cout << "Enter another integer: ";
    std::cin >> number2;
    
    int sum = number1 + number2;
    std::cout << number1 << " + " << number2
            << " = " << sum << std::endl;
    return 0;
}