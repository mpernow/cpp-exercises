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

    Test(const Test &arg) : i(arg.i), m(arg.m)
    {
        cout << "Copy constructor called" << endl;
    }

    Test(Test &&arg) noexcept : i(arg.i), m(std::move(arg.m))
    {
        cout << "Move constructor called" << endl;
    }

    Test &operator=(const Test &arg)
    {
        cout << "Copy assignment operator called" << endl;
        if (this != &arg)
        {
            i = arg.i;
            m = arg.m;
        }
        return *this;
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
    }
};

int main()
{
    Test test;  // Call default constructor
    cout << "Copying: ";
    Test test2 = test;  // Call copy constructor
    cout << "\nMoving temporary: ";
    Test test3 = Test();  // Call move constructor with temporary object
    cout << "\nMoving rvalue: ";
    Test test4(std::move(test));  // Call move constructor by casting to rvalue

    cout << endl;

    Test test5;
    cout << "\nAssigning: ";
    test5 = test2;  // Call copy assignment operator

    Test test6;
    cout << "\nAssigning from temporary: ";
    test6 = Test();
}
