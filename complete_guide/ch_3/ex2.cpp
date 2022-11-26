// A program containing errors!
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    string message = "\nLearn from your mistakes!";
    int len = message.length();

    cout << message << endl;
    cout << "Length of the string: " << len << endl;
    
    // And a random number in addition:
    srand(12.5);
    cout << "\nRandom number: " << rand() << endl;
    return 0;
}