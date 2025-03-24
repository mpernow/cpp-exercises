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
    auto start = gra_keys.first;
    auto finish = gra_keys.second;

    auto result = find_if(start, finish,
                          [](pair<string, int> p) { return p.second == 66; });

    while (result != finish)
    {
        results.push_back(*result);

        ++result;
        result = find_if(result, finish,
                         [](pair<string, int> p) { return p.second == 66; });
    }

    for (auto r : results)
        print(r);
    cout << endl;
}
