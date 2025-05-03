#include <iostream>

using namespace std;

class Test
{
  public:
    Test() = default;

    Test(const Test &other) = delete;

    Test &operator=(const Test &other) = delete;
};

int main()
{
    Test test;
    // Test test2(std::move(test));  // Use of deleted function
    // Test test3(test);             // Use of deleted function
}
