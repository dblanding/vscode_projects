#include <iostream>
#include <string>

using namespace std;

int main()
{
    string message = "I have learned something new again!";
    cout << "message: " << message <<endl;
    cout << "messaage lenth: " << message.length() << endl;

    // Read two lines of text from the keyboard, concatenate and display
    string msg1, msg2, msg3, glue = "  *  ";
    cout << "Enter a first message: ";
    cin >> msg1;
    cout << "Enter a second message: ";
    cin >> msg2;
    // msg3 = msg1.append(glue).append(msg2);
    msg3 = msg1 + glue + msg2;
    cout << msg3 << endl;
    return 0;
}