#include <chrono>
#include <iostream>

using namespace std;
using namespace chrono;

long long fibonacci(long long n)
{
    return (n < 2) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    auto start = steady_clock::now();
    long long n = fibonacci(45);
    cout << "Fibonacci number is " << n << endl;

    auto finish = steady_clock::now();

    auto elapsed = duration_cast<milliseconds>(finish - start).count();
    cout << "Time taken: " << elapsed << " milliseconds" << endl;
}
