#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i < 10; i++) {
        cout << "Hello " << i << endl;
    }

    int i = 0;
    while (i < 10) {
        cout << "Hello "  << i << endl;
        i++;
    }
    
    cout << "End of program." << endl;
    return 0;
}