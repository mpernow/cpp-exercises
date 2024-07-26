#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str{"Hello world!"};
    str[1] = 'a'; // Change second character to 'a'

    string s1 = str.substr(6);
    string s2 = str.substr(6, 2);

    cout << str << endl;
    cout << s1 << endl;
    cout << s2 << endl;
}