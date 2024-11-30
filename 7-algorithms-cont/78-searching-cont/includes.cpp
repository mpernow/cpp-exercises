#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str{"Hello world"};
    // string str{"Hello includes all"};

    string vowels{"aeiou"};

    // Sort, since needed for includes
    sort(begin(str), end(str));
    sort(begin(vowels), end(vowels));

    cout << "String to search: " << str << endl;
    cout << "vowels: " << vowels << endl;

    if (includes(cbegin(str), cend(str), cbegin(vowels), cend(vowels)))
        cout << "String contains all characters from vowels\n";
    else
        cout << "String does not contain all characters from vowels\n";
}
