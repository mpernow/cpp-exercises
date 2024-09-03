#include <iostream>

using namespace std;

class Test
{
public:
    // Delete copy constructor and assignment operator
    // Same effect as making them private
    Test(const Test &) = delete;
    Test &operator=(const Test &) = delete;
    // Use default constructor
    Test() = default;
};

int main()
{
    Test t1, t2;
    // Test t3(t1); // Error: copy constructor is deleted
    // t2 = t1;     // Error: assignment operator is deleted
}