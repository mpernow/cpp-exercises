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

    auto res = scores.insert(make_pair("Graham"s, 66));

    auto iter = res.first;
    if (res.second)
    {
        cout << "Inserted a new element with name " << iter->first;
        cout << " and score " << iter->second << endl;
    }
    else
    {
        cout << "Modofying existing element with name " << iter->first;
        iter->second = 66;
        cout << " to have score " << iter->second << endl;
    }
}
