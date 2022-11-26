#include <iostream>
#include <vector>
#include "my_vector_functions.hpp"

using namespace std;

int main()
{
    vector<int> list = { 5, 5, 4 };
    cout << "A. Size of number list: " << list.size() << endl;
    add_zeros_to_list(list, 4);
    cout << "C. Size of number list: " << list.size() << endl;
    print_all_elements_from_list(list);
    return 0;
}