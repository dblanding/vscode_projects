#include <iostream>
#include <vector>
#include <thread>

// MultiThread example from:
// https://www.educative.io/blog/modern-multithreading-and-concurrency-in-cpp

void print(int n, const std::string &str) {
    std::string msg = std::to_string(n) + " : " + str;
    std::cout << msg << std::endl;
}

int main() {
    std::vector<std::string> s = {
        "Educative.blog",
        "Educative",
        "courses",
        "are great"
    };

    std::vector<std::thread> threads;

    for (int i = 0; i < s.size(); i++) {
        threads.push_back(std::thread(print, i, s[i]));
    }

    for (auto &th : threads) {
        th.join();
    }
    return 0;
}

// compile with: $ g++ multi_thrd.cpp -pthread -o multi_thrd
// run with: $ ./multi_thrd
