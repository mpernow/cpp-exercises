#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> words{"a", "collection", "of", "words", "with", "varying", "lengths"};
    int max{5};

    // Create and store a lambda expression
    auto is_longer_than = [max](const string &str)
    { return str.size() > max; };

    auto res = find_if(cbegin(words), cend(words), is_longer_than);

    if (res != cend(words))
    {
        cout << R"(The first word which is more than )" << max << R"( letters long is ")";
        cout << *res << R"(")" << endl;
    }
}