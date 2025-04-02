#include <algorithm>
#include <cctype>
#include <iostream>

#include "constants.h"
#include "input.h"

using namespace std;

string normalize(const string &s)
{
    string retval{""};

    copy_if(cbegin(s), cend(s), back_inserter(retval),
            [](char c) { return isalpha(c); });
    transform(begin(retval), end(retval), begin(retval),
              [](char c) { return toupper(c); });

    return retval;
}

peg_array get_input()
{
    string input{""}, normal{""};
    peg_array result{""};

    do
    {
        cout << "Enter " << constants::npegs << " characters (";
        for (auto c : constants::colours)
            cout << c;
        cout << ")" << endl;
        getline(cin, input);

        normal = normalize(input);
    } while (normal.size() != constants::npegs);

    for (int i = 0; i < normal.size(); ++i)
    {
        result[i] = normal[i];
    }
    return result;
}
