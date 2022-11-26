/*
This simple file uses passw1.cpp and passw1.h which were
deriveed from Passw1.cpp (p 202)
compile: g++ passw.cpp passw1.cpp -o passw
*/

#include "passw1.h"

int main()
{
    bool result = getPassword();
    cout << "passwrd OK: " << boolalpha << result << endl;

    if(result)
    cout << "Login successful!" << endl;
    else
    cout << "Login Failed!" << endl;
    
    return 0;
}