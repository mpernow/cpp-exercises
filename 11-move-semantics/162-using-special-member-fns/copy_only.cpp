#include <iostream>

using namespace std;

class Test
{
  public:
    Test() = default;

    Test(const Test &other) { cout << "Copy constructor called" << endl; }

    Test &operator=(Test &other)
    {
        cout << "Copy assignment called" << endl;
        return *this;
    }

    Test(Test &&other) noexcept = delete;

    Test &operator=(Test &&other) noexcept = delete;
};

int main()
{
    Test test;
    // Test test2(std::move(test)); // Does not fall back to copy constructor
    Test test4(test);
}
