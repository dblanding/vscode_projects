#include <iostream>
#include <thread>

void threadFunction()
{
    int i = 0;
    for(int i = 0; i < 3; i++) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // simulate work
        std::cout << "Work in a thread ...\n";
    }
}

int main(){
    // create thread
    std::thread t(threadFunction);

    // Do something in main
    std::this_thread::sleep_for(std::chrono::milliseconds(50)); // simulate work
    std::cout << "Finished work on main\n";

    // Wait for thread to finish
    t.join();

    std::cout << "Finishing main\n";

    return 0;
}