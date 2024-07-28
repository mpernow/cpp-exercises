#include <iostream>
#include <string>

using namespace std;

int main()
{
    string hello{"Hello"};

    auto first = begin(hello);
    hello.erase(first); // Erase first character
    cout << "hello = " << hello << endl;

    hello.erase(begin(hello) + 1, end(hello) - 1); // Erase all characters except first and last
    cout << "hello = " << hello << endl;
}