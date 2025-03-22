#include <iostream>
#include <map>
#include <string>

using namespace std;

void print(const map<string, int> &s)
{
    for (auto it : s)
        cout << it.first << " has a score of " << it.second << endl;
    cout << endl;
}

int main()
{
    map<string, int> scores;
    scores.insert(make_pair("Maybelline", 86));
    scores.insert({"Graham", 78});

    print(scores);

    auto ret = scores.insert({"Graham", 78});
    if (ret.second)
        cout << "Added element with key Graham" << endl;
    else
    {
        auto it = ret.first;
        cout << "Map already has an element with key " << it->first;
        cout << " which has value " << it->second << endl;
    }

    scores.erase("Graham");
    print(scores);

    auto ret2 = scores.insert({"Graham", 66});
    if (ret2.second)
        cout << "Added element with key Graham" << endl;
    else
    {
        auto it = ret2.first;
        cout << "Map already has an element with key " << it->first;
        cout << " which has value " << it->second << endl;
    }
    print(scores);
}
