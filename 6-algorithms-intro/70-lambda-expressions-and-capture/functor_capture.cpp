#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class ge_n
{
private:
    const int n;

public:
    // Constructor takes the captured variable
    ge_n(const int n) : n(n) {}

    bool operator()(const string &str) const
    {
        return str.size() > n;
    }
};

int main()
{
    vector<string> words{"a", "collection", "of", "words", "with", "varying", "lengths"};

    int n{5};
    auto res = find_if(cbegin(words), cend(words), ge_n(n));

    if (res != cend(words))
    {
        cout << R"(The first word which is more than )" << n << R"( letters long is ")";
        cout << *res << R"(")" << endl;
    }
}