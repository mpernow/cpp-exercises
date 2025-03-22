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

    auto gra = scores.find("Graham");

    if (gra != scores.end())
    {
        cout << "Found an element with key ";
        cout << gra->first << " which has a score of " << gra->second << endl;
        // Cannot modify key:
        // cout << "Changing Graham's name to Gra" << endl;
        // gra->first = "Gra"s;
        cout << "Changing Graham's score to 67" << endl;
        gra->second = 67;
        print(scores);
    }
    else
        cout << "The map has no element with key Graham" << endl;

    auto n = scores.count("Graham");
    if (n == 1)
        cout << "The map has 1 element with key \"Graham\"\n";
    else
        cout << "The map has 0 elements with key \"Graham\"\n";
}
