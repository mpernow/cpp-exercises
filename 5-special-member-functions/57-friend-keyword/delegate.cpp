#include <iostream>
#include <string>

using namespace std;

class Test
{
    int i{42};
    string s{"Hello"};

public:
    void print() const
    {
        // Avoid using friend by implementing it here
        cout << "i = " << i << ", s = " << s << endl;
    }
};

void print(const Test &test)
{
    // The function only calls Test's print
    test.print();
}

int main()
{
    Test test;
    print(test);
}