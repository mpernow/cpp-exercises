#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_multimap<string, int> scores;
    scores.insert({"Graham", 78});
    scores.insert({"Grace", 66});
    scores.insert({"Graham", 66});
    scores.insert({"Graham", 72});
    scores.insert({"Hareesh", 77});

    for (auto it : scores)
    {
        cout << it.first << " has a score of " << it.second << endl;
    }

    multimap<string, int> sorted_scores;

    // Copy into the ordered multimap. They will automatically be sorted
    copy(begin(scores), end(scores),
         inserter(sorted_scores, end(sorted_scores)));

    cout << "Sorted: " << endl;
    for (auto it : sorted_scores)
    {
        cout << it.first << " has a score of " << it.second << endl;
    }
}
