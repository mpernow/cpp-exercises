#include <iostream>
#include <string>

using namespace std;

class Test
{
    int i;

public:
    // Test(int i) : i(i) {}
    explicit Test(int i) : i(i) {}
};

int main()
{
    // Test test = 4; // Not allowed if constructor is explicit
    Test test{4};
}