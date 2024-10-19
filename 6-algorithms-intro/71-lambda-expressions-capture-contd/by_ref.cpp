#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> words{"a", "collection", "of", "words", "with", "varying", "lengths"};

    int n{5}, idx{-1};
    // Use mutable keyword to allow lambda expression to modify variables
    auto res = find_if(cbegin(words), cend(words), [n, &idx](const string &str) mutable
                       {++idx; return str.size() > n; });

    if (res != cend(words))
    {
        cout << R"(The first word which is more than )" << n << R"( letters long is ")";
        cout << *res << R"(")" << endl;
        cout << "The index is " << idx << endl;
    }
}
