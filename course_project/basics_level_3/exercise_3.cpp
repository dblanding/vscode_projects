#include <iostream>
#include <vector>

using namespace std;

// Ask user to give a bunch of (non-zero) numbers, return a vector of those numbers. (Stop when 0 is given.)
vector<double> create_number_list()
{
    cout << "Enter a bunch of numbers. (Enter '0' to stop.) " << endl;
    vector<double> number_list;
    bool ask_user_again = true;  // flag to stay in while loop
    double number;
    while (ask_user_again) {
        cin >> number;
        if (number == 0) {
            ask_user_again = false;  // exit while loop
        }
        else {
            number_list.push_back(number);
        }
    }
    return number_list;
}

// Find the max value inside a vector (list) of numbers
double find_max_value(vector<double> number_list)
{
    double max_value = number_list.at(0);
    for (double number: number_list) {
        if (number > max_value){
            max_value = number;
        };
    }
    return max_value;
}


int main()
{
    vector<double> number_list = create_number_list();

    cout << "Max value: " << find_max_value(number_list) << endl;

    return 0;
}