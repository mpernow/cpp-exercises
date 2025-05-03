#include <iostream>
#include <utility>

using namespace std;

class Test
{
    string m_str;

  public:
    Test(const string &str) : m_str(str)
    {
        cout << "const string& constructor" << endl;
    }
    Test(string &&str) : m_str(std::move(str))
    {
        cout << "string&& constructor" << endl;
    }
};

void g(string &x) { cout << "Modifiable version of g" << endl; }

void g(string &&x) { cout << "Move version of g" << endl; }

template <class T> Test make_test(T &&x)
{
    g(std::forward<T>(x));
    return Test(std::forward<T>(x));
}

int main()
{
    string hello{"hello"};

    cout << "Calling make_test with lvalue" << endl;
    Test t1 = make_test(hello);

    cout << "\nCalling make_test with rvalue" << endl;
    Test t2 = make_test(std::move(hello));
}
