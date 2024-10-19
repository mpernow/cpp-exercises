#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class ge_n
{
private:
    const int n;
    int &idx;

public:
    ge_n(const int n, int &idx) : n(n), idx(idx) {}
    bool operator()(const string &str) const
    {
        ++idx;
        return str.size() > n;
    }
};

int main()
{
    vector<string> words{"a", "collection", "of", "words", "with", "varying", "lengths"};

    int n = 5;
    int idx = -1;
    auto res = find_if(cbegin(words), cend(words), ge_n(n, idx));

    if (res != cend(words))
    {
        cout << R"(The first word which is more than )" << n << R"( letters long is ")";
        cout << *res << R"(")" << endl;
        cout << "The index is " << idx << endl;
    }
}