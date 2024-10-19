#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> words{"a", "collection", "of", "words", "with", "varying", "lengths"};

    int n{5};

    // Find words longer than n characters using lambda capture
    auto res = find_if(cbegin(words), cend(words), [n](const string &str)
                       { return str.size() > n; });

    if (res != cend(words))
    {
        cout << R"(The first word which is more than )" << n << R"( letters long is ")";
        cout << *res << R"(")" << endl;
    }
}