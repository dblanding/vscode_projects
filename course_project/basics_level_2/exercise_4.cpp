#include <iostream>

using namespace std;

// Convert from Celsius to Fahrenheit
double celsius_to_fahrenheit(double temp_c)
{
    return temp_c * 1.8 + 32.0;
}

// Convert from Fahrenheit to Celsius
double fahrenheit_to_celsius(double temp_f)
{
    return (temp_f - 32.0) / 1.8;
}

int main()
{
    /*
    double celsius;
    cout << "Enter Celsius temperature: ";
    cin >> celsius;
    cout << "Fahrenheit temperature: " << celsius_to_fahrenheit(celsius) << endl;
    */

    double fahrenheit;
    cout << "Enter Fahrenheit temperature: ";
    cin >> fahrenheit;
    cout << "Celsius temperature: " << fahrenheit_to_celsius(fahrenheit) << endl;
    return 0;
}