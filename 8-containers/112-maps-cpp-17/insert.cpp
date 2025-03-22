#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> scores;
    scores.insert(make_pair("Maybelline", 86));
    scores.insert({"Graham", 78});

    for (auto [name, score] : scores)
    {
        cout << name << " has a score of " << score << endl;
    }
    cout << endl;

    auto [iter, success] = scores.insert(make_pair("Graham"s, 66));

    if (success)
    {
        cout << "Inserted the new element\n";
    }
    else
    {
        auto [name, score] = *iter;  // dereference iterator
        cout << "Insert failed: ";
        cout << "existing element with name " << name << " and score " << score
             << endl;
    }

    cout << "Map elements:" << endl;
    for (auto [name, score] : scores)
    {
        cout << name << " has a score of " << score << endl;
    }
}
