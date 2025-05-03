#include <iostream>

using namespace std;

class Test
{
  public:
    Test() = default;

    Test(Test &&other) noexcept { cout << "Move constructor called" << endl; }

    Test &operator=(Test &&other) noexcept
    {
        cout << "Move assignment operator called" << endl;
        return *this;
    }
};

int main()
{
    Test test;
    Test test2(std::move(test));
    test2 = std::move(test);
    // Test test4(test);  // Error. use of deleted function
}
