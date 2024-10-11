#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

// Functor
class ge_n
{
private:
    const int n;

public:
    ge_n(const int n) : n(n) {}

    bool operator()(const string &str) const
    {
        return str.size() > n;
    }
};

int main()
{
    vector<string> names = {"Dilbert", "PHB", "Dogbert", "Asok", "Ted", "Alice", "Wally"};

    auto res = find_if(cbegin(names), cend(names), ge_n(5));

    if (res != cend(names))
        cout << "The first word with > 5 characters is \"" << *res << "\"\n";
}