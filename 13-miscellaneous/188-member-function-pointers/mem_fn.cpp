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
    auto pfunc = &Test::func;

    auto f = mem_fn(pfunc);

    // Invoke using an instance of Test
    Test test;
    f(test, 42, "Hello"s);
}
