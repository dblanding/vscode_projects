#include <iostream>
#include <vector>
#include "my_vector_functions.hpp"

using namespace std;

int main()
{
    vector<int> list_A = { 4, 5, 6 };
    vector<int> list_B = { 1, 2, 3 };
    append_list_A_to_list_B(list_A, list_B);
    print_all_elements_from_list(list_B);
    return 0;
}