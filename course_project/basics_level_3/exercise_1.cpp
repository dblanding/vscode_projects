#include <iostream>
#include <vector>

using namespace std;

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
    // Arbitrary list of numbers
    vector<double> number_list = { 12.3, -4.5, 15.0, 11.7, -0.4 };

    cout << "Max value: " << find_max_value(number_list) << endl;

    return 0;
}