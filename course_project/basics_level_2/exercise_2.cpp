#include <iostream>
using namespace std;

void add_two_ints()
{
    int number1;
    int number2;
    cout << "Enter an integer number: ";
    cin >> number1;
    cout << "Enter another integer: ";
    cin >> number2;
    
    int sum = number1 + number2;
    cout << number1 << " + " << number2
            << " = " << sum << endl;
}

int main()
{
    add_two_ints();
    return 0;
}
