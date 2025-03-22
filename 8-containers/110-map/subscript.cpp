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

    cout << "Graham has a score of " << scores["Graham"]
         << endl;  // Fetches the value with key "Graham"
    print(scores);

    cout << "Setting Graham's score to 66" << endl;
    scores["Graham"] =
        66;  // Changes the value of the element with key "Graham"
    print(scores);

    cout << "Adding Grace's score of 66" << endl;
    scores["Grace"] = 66;  // Creates a new element with key "Grace"
    print(scores);
}
