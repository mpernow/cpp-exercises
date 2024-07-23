#include <iostream>
#include <string>

using namespace std;
using namespace std::literals;

int main()
{
    const char *cca = "Hello, world!";
    cout << "cca: " << cca << endl;

    string str = "Hello, world!"s;
    cout << "str: " << str << endl;

    cout << "std::string literal: " << "Hello"s + ", world!"s << endl; // Note the suffix "s" to make it a string literal. Otherwise they would char arrays which cannot be added
}