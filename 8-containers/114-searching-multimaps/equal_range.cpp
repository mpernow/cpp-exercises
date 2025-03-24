#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

void print(const pair<string, int> &score)
{
    cout << "(\"" << score.first << "\", " << score.second << "), ";
}

int main()
{
    multimap<string, int> scores;
    scores.insert({"Graham", 78});
    scores.insert({"Grace", 66});
    scores.insert({"Graham", 66});
    scores.insert({"Hareesh", 77});
    scores.insert({"Graham", 66});

    cout << "Multimap elements: " << endl;
    for (auto score : scores)
        print(score);
    cout << endl;

    auto gra_keys = scores.equal_range("Graham");

    cout << endl << "Results for Graham: " << endl;
    for (auto it = gra_keys.first; it != gra_keys.second; ++it)
        print(*it);
    cout << endl;

    // C++17
    auto [gra_start, gra_finish] = scores.equal_range("Graham");

    cout << endl << "Results for Graham: " << endl;
    for (auto it = gra_start; it != gra_finish; ++it)
        print(*it);
}
