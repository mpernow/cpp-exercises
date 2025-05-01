#include <iostream>

using namespace std;

void func(int &&x) { cout << "Called with argument: " << x << endl; }

int main()
{
    int y{2};

    func(2);
    // func(y);  // Error
}
