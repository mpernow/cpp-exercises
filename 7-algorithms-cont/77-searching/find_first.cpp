#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str{"Hello world"};
    cout << "String to search: " << str << endl;

    string vowels{"aeiou"};

    // Get iterator to first vowel
    auto vowel = find_first_of(cbegin(str), cend(str), cbegin(vowels), cend(vowels));

    if (vowel != cend(str))
    {
        cout << "First vowel is " << *vowel << " at index " << distance(cbegin(str), vowel) << endl;
    }

    // Get iterator to second vowel
    // Use next(vowel) as starting iterator to start after the first hit
    auto vowel2 = find_first_of(next(vowel), cend(str), cbegin(vowels), cend(vowels));

    if (vowel2 != cend(str))
    {
        cout << "Second vowel is " << *vowel2 << " at index " << distance(cbegin(str), vowel2);
    }
}