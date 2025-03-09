#include <algorithm>
#include <cctype>
#include <iostream>
#include <iterator>
#include <string>

using namespace std;

string normalize(const string &s)
{
    // Return a copy without whitespace, and all lower case
    string retval{""};

    copy_if(cbegin(s), cend(s), back_inserter(retval),
            [](char c) { return isalpha(c); });

    transform(begin(retval), end(retval), begin(retval),
              [](char c) { return tolower(c); });

    return retval;
}

int main()
{
    string s{""};
    cout << "Please enter a palindrome: ";
    getline(cin, s);

    string pal{normalize(s)};

    // Compare string to its reverse using a reverse iterator
    auto p = mismatch(cbegin(pal), cend(pal), crbegin(pal));

    // Check if we have a mismatch
    if (p.first == cend(pal) && p.second == crend(pal))
    {
        // No mismatch found: it is palindrome
        cout << "\"" << s << "\" is a palindrome" << endl;
    }
    else
    {
        // There is a mismatch
        // p.first does not match p.second
        cout << "\"" << s << "\" is not a palindrome" << endl;

        string outstr;
        copy(cbegin(pal), p.second.base(), back_inserter(outstr));
        cout << "'" << *(p.first) << "'" << " does not match " << "\'"
             << *(p.second) << "\'";
        cout << " at \"" << outstr << "\"" << endl;
    }
}
