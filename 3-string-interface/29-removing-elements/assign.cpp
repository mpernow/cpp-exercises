#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str{"Hello"};
    cout << "str = " << str << endl;

    str.assign("Goodbye"); // Replace the whole string

    cout << "str = " << str << endl;
}