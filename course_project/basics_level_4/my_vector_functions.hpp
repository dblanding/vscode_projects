#ifndef MY_VECTOR_FUNCTIONS_H
#define MY_VECTOR_FUNCTIONS_H

#include <vector>
#include <string>

using namespace std;

void add_zeros_to_list(vector<int> &number_list, int zeros_number);
void print_all_elements_from_list(const vector<int> &list);
void append_list_A_to_list_B(const vector<int> &list_A, vector<int> &list_B);

#endif