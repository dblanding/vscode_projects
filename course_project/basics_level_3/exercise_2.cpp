#include <iostream>
#include <vector>

using namespace std;

// Ask user to give 5 numbers, return a vector of those numbers.
vector<double> create_number_list()
{
    cout << "You will enter 5 numbers." << endl;
    vector<double> number_list;
    double number;
    for (int i = 0; i < 5; i++){
        cout << "Number " << i + 1 << ": ";
        cin >> number;
        number_list.push_back(number); 
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