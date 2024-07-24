#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str{"Hello"};

    cout << "str: " << str << endl;
    cout << "Number of elements: " << str.end() - str.begin() << endl;

    auto second = begin(str) + 1;

    cout << "Second element is " << *second << endl;

    auto last = end(str) - 1;
    cout << "Last element is " << *last << endl;

    auto mid = begin(str) + (end(str) - begin(str)) / 2;
    cout << "Middle elements is " << *mid << endl;
}