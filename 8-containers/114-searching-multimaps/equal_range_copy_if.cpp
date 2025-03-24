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

    vector<pair<string, int>> results;

    auto gra_keys =
        scores.equal_range("Graham");  // Find elements with key "Graham"

    copy_if(gra_keys.first, gra_keys.second, back_inserter(results),
            [](pair<string, int> p) { return p.second == 66; });

    for (auto r : results)
        print(r);
    cout << endl;
}
