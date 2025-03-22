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

    // Can initialise the bool in the if statement
    if (auto [iter, success] = scores.insert_or_assign("Graham"s, 66); success)
    {
        cout << "Inserted a new element\n";
    }
    else
    {
        auto [name, score] = *iter;  // dereference iterator
        cout << "Existing element with name " << name << " now has score "
             << score << endl;
    }

    for (auto [name, score] : scores)
    {
        cout << name << " has a score of " << score << endl;
    }
}
