#include <functional>
#include <iostream>

using namespace std;

class Test
{
  public:
    void func(int a, const string &b)
    {
        cout << "func called with arguments " << a << " and " << b << endl;
    }
};

int main()
{
    // Define pointer to member function of Test
    // void (Test::*pfunc)(int, const string &);

    // Make pfunc point to the member function
    // pfunc = &Test::func;

    // C++11
    auto pfunc = &Test::func;

    cout << "With Test object:\n";
    Test test;
    (test.*pfunc)(42, "Hello"s);

    cout << "\nThrough pointer to Test:\n";
    Test *ptest = &test;
    (ptest->*pfunc)(42, "Hello"s);
}
