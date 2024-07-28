#include <iostream>
#include <string>

using namespace std;

int main()
{
    string hello{"Hello"};
    cout << "hello = " << hello << endl;

    hello.erase(3, 1); // Erase 1 character starting from position 3

    cout << "hello = " << hello << endl;

    auto opos = hello.find('e'); // Find first occurrence of 'e'

    if (opos != string::npos)
        hello.erase(opos, 2); // Erase two elements starting from position of first 'e'

    cout << "hello = " << hello << endl;
}