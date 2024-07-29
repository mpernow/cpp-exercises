#include <iostream>
#include <cctype>

using namespace std;

// Case-insensitive string equality
bool equal_strings(const string &lhs, const string &rhs)
{
    // Check that they have equal lingths
    if (lhs.size() != rhs.size())
        return false;

    // Get iterators to the first element of each string
    auto lit = cbegin(lhs);
    auto rit = cbegin(rhs);

    // Iterate over them and compare each character
    while (lit != cend(lhs) && rit != cend(rhs))
    {
        if (toupper(*lit) != toupper(*rit))
            return false;
        ++lit;
        ++rit;
    }

    // If we got here, they are the same
    return true;
}

int main()
{
    string a{"one"}, b{"two"}, c{"ONe"};
    cout << a << " and " << b << " are " << (equal_strings(a, b) ? "" : "not ") << "equal\n";
    cout << b << " and " << c << " are " << (equal_strings(b, c) ? "" : "not ") << "equal\n";
    cout << a << " and " << c << " are " << (equal_strings(a, c) ? "" : "not ") << "equal\n";
}