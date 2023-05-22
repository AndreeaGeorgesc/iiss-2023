#include <iostream>
#include <thread>
#include <future>

void calculateSum(int a, int b, std::promise<int>&& p) {
    std::this_thread::sleep_for(std::chrono::seconds(3)); // Simulating a long computation
    p.set_value(a + b);
}

int main() {
    // Create a promise and a future
    std::promise<int> sumPromise;
    std::future<int> sumFuture = sumPromise.get_future();

    // Start an asynchronous task
    std::thread workerThread(calculateSum, 5, 7, std::move(sumPromise));

    // Do some other work while the calculation is in progress...

    std::cout << "Doing some other work..." << std::endl;

    // Wait for the result and retrieve it
    int sum = sumFuture.get();

    std::cout << "Sum: " << sum << std::endl;

    // Wait for the worker thread to finish
    workerThread.join();

    return 0;
}
