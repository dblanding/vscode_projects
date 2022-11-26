// Reads integral decimal values and
// generates octal, decimal, and hexadecimal output.
#include <iostream> // Declarations of cin, cout and
using namespace std; // manipulators oct, hex, ...
int main()
{
    int number;
    cout << "Please enter an integer: ";
    cin >> number;
    cout << uppercase // for hex-digits
    << " octal \t decimal \t hexadecimal\n "
    << oct << number << " \t "
    << dec << number << " \t "
    << hex << number << endl;
    cout << dec << -2 << " " << hex << -2 << endl;
    return 0;
}