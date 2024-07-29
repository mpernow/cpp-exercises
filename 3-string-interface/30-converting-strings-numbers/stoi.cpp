#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << stoi("42"s) << endl;

    string str{"  413 159"}; // Leading whitespace ignored, stops at first whitespace: displays 314

    size_t n_processed;
    auto i = stoi(str, &n_processed);

    if (n_processed < str.size())
    {
        cout << "Non-numeric character at index " << n_processed << endl;
    }

    cout << "Result of conversion: " << i << endl;

    // stoi("abcdef"s); // Cannot be converted

    auto x = stoi("2a", nullptr, 16); // Base-16
    cout << "Result of conversion: " << x << endl;

    // Can also use stoll and similar for all built-in integer types
}