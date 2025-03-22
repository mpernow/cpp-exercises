#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> scores;
    scores.insert(make_pair("Maybelline", 86));
    scores.insert({"Graham", 78});

    cout << "Map elements:" << endl;
    for (auto [name, score] : scores)
    {  // Range-for loop with structured binding
        cout << name << " has a score of " << score << endl;
    }
}
