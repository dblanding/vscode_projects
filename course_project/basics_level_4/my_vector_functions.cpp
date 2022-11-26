#include "my_vector_functions.hpp"
#include <iostream>

void add_zeros_to_list(vector<int> &number_list, int zeros_number)
{
    for (int i = 0; i < zeros_number; i++) {
        number_list.push_back(0);
    }
}

void print_all_elements_from_list(const vector<int> &list)
{
    for (int number: list) {
        cout << number << endl;
    }
}

void append_list_A_to_list_B(const vector<int> &list_A, vector<int> &list_B)
{
    for (int number: list_A) {
        list_B.push_back(number);
    }
}