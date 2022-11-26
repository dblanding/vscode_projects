#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// Return average of a list of doubles
double compute_average_from_list(vector<double> number_list)
{
    double total = accumulate(number_list.begin(), number_list.end(), 0.0);
    return total / number_list.size();
}

int main()
{
    vector<double> number_list = {34.5, 27.8, 26.8, 56.1, 75.9};
    double average = compute_average_from_list(number_list);
    cout << "The average of the values in the list is: " << average << endl;
    return 0;
}
