#include <iostream>

using namespace std;

// Third example: Pass a pointer to a variable

void myFunc(int *i)  // show that we are passing a pointer
{
    *i = *i + 1;     // dereference pointer
    cout << "myVar at myFunc has the value: " << *i << endl;  // dereference pointer
}

int main()
{
    int myVar = 0;

    cout << "myVar at main has the value: " << myVar << endl;
    myFunc(&myVar);  // pass pointer
    cout << "myVar at main, after calling myFunc, has the value: " << myVar << endl;

    return 0;
}