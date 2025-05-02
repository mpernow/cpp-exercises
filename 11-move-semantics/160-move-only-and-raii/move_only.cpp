#include <iostream>

using namespace std;

class MyClass
{
};

class Test
{
  private:
    int i{0};
    MyClass m;

  public:
    Test() = default;

    // Delete the copy constructor and assignment operator
    Test(const Test &) = delete;
    Test &operator=(const Test &) = delete;

    // Implement move constructor and moce assignment operator
    Test(Test &&arg) noexcept : i(arg.i), m(std::move(m))
    {
        cout << "Move constructor called" << endl;
    }

    Test &operator=(Test &&arg) noexcept
    {
        cout << "Move assignment operator called" << endl;
        if (this != &arg)
        {
            i = arg.i;
            m = std::move(arg.m);
        }
        return *this;
        return *this;
    }
};

int main()
{
    Test test;

    // Copy constructor deleted
    // cout << "Copying: ";
    // Test test2 = test;

    cout << "\nMoving temporary: ";
    Test test3 = Test();

    cout << "\nMoving rvalue: ";
    Test test4(std::move(test));

    cout << endl;

    // Copy assignment deleted
    // Test test5;
    // cout << "\nAssigning:  ";
    // test5 = test;

    Test test6;
    cout << "\nAssigning from temporary: ";
    test6 = Test();
}
