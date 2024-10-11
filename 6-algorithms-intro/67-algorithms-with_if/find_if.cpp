#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Functor
class ge_5
{
public:
    bool operator()(const string &s) const
    {
        return (s.size() > 5);
    }
};

int main()
{
    vector<string> names = {"Dilbert", "PHB", "Dogbert", "Asok", "Ted", "Alice", "Wally"};

    // Find first element with > 5 characters using loop
    ge_5 long_enough;
    for (auto name : names)
    {
        if (long_enough(name))
        {
            cout << "Loop: the first name with > 5 characters is \"" << name << "\"\n";
            break;
        }
    }

    // Find first element with > 5 characters using functor
    auto res = find_if(cbegin(names), cend(names), ge_5());

    if (res != cend(names))
    {
        cout << "Algorithm: the first name with > 5 characters is \"" << *res << "\"\n";
    }
}