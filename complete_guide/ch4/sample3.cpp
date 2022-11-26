#include <iostream>
#include <string>

using namespace std;

int main()
{
    double x = 12.0;
    string line( 40, '-');
    cout.precision(2); // Set Precision
    cout << " By default: " << x << endl;
    cout << " showpoint: " << showpoint << x << endl;
    cout << " fixed: " << fixed << x << endl;
    cout << " scientific: " << scientific << x << endl;
    cout << line << endl;
    return 0;
}