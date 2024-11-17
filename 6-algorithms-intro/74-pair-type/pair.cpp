#include <iostream>
#include <string>

using namespace std;

int main()
{
    pair<string, string> wordpair{"hello"s, "there"s};
    auto wordpair2{make_pair("hello", "there")};
    // pair wordpair3{"hello"s, "there"s}; // c++17 CTAD

    cout << "First element of pair is \"" << wordpair.first << "\"" << endl;
    cout << "Second element of pair is \"" << wordpair.second << "\"" << endl;
}