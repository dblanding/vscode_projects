#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<double> number_list = {34.5, 27.8, 26.8, 56.1};
    double total = std::accumulate(number_list.begin(), number_list.end(), 0.0);
    std::cout << "The average of the four numbers is: ";
    std::cout << total / number_list.size() << std::endl;
    return 0;
}