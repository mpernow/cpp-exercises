#include <iostream>

using namespace std;

int get() { return 2; }

void func(const int &ri)  // Taking int by const reference
{
    cout << ri << endl;
}

int main()
{
    func(get());  // Return value from get() is an rvalue
                  // The rvalue is passed by const ref
}
