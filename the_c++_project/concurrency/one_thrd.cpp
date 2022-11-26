#include <iostream>
#include <thread>

// Simple One-Thread example from:
// https://www.educative.io/blog/modern-multithreading-and-concurrency-in-cpp

void print(int n, const std::string &str) {
    std::cout << "Printing integer: " << n << std::endl;
    std::cout << "Printing string: " << str << std::endl;
}

int main() {
    std::thread t1(print, 10, "Educative.blog");
    t1.join();
    return 0;
}

// compile with: $ g++ one_thrd.cpp -pthread -o one_thrd
// run with: $ ./one_thrd
