#include <iostream>

namespace abc {
    int triple_number(int number)
    {
        return number * 3;
    }

    void cout() {}

}

using namespace std;

void say_hello(std::string user_name, int user_age)
{
    cout << "Hello " << user_name << endl;
    cout << "You are " << user_age << endl;
    cout << "test" << endl;
}


// compute triple of number and print it
void print_triple_number(int number)
{
    cout << abc::triple_number(number) << endl;
}

int main()
{
    say_hello("Bob", 34);
    //say_hello("John", 36);
    print_triple_number(4);
    return 0;
}