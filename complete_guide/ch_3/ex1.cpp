#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    double x1(4), x2(12.25), x3(0.0121);
    cout << "\nNumber\t\tSquare Root" << endl;
    cout << endl;
    cout << x1 << "\t\t"  << sqrt(x1) << endl;
    cout << x2 << "\t\t"  << sqrt(x2) << endl;
    cout << x3 << "\t\t"  << sqrt(x3) << endl;

    double number;
    cout << "Enter another number: ";
    cin >> number;
    cout << "The square root of " << number << " is " << sqrt(number) << endl;
    return 0;
}