#include <iostream>
#include <thread>

void threadFunction(std::string threadName)
{
    int i = 0;
    for(int i = 0; i < 3; i++) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // simulate work
        std::cout << "Work in a thread " << threadName << "...\n";
    }
}

int main(){
    // create thread
    std::thread t(threadFunction, "Example");

    // Do something in main
    std::this_thread::sleep_for(std::chrono::milliseconds(50)); // simulate work
    std::cout << "Finished work on main\n";

    // Wait for thread to finish
    t.join();

    std::cout << "Finishing main\n";

    // Medium article shows how to find number of cores available
    // https://medium.com/bosphorusiss/c-concurrency-101-2c17ffe8019e
    std::cout << "Number of Cores: " << std::thread::hardware_concurrency() << std::endl;

    return 0;
}