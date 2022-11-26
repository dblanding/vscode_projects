#include <iostream>

using namespace std;

// Second example: Pass variable by reference

void myFunc(int &i)  // pass myVar by reference
{
    i = i + 1;
    cout << "myVar at myFunc has the value: " << i << endl;
}

int main()
{
    int myVar = 0;

    cout << "myVar at main has the value: " << myVar << endl;
    myFunc(myVar);
    cout << "myVar at main, after calling myFunc, has the value: " << myVar << endl;

    return 0;
}