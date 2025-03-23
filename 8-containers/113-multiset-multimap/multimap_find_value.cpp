#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    multimap<string, int> scores;
    scores.insert({"Graham"s, 78});
    scores.insert({"Grace"s, 66});
    scores.insert({"Graham"s, 66});
    scores.insert({"Graham"s, 72});
    scores.insert({"Hareesh"s, 77});

    auto res = scores.find("Graham");
    if (res != end(scores))
    {
        auto n_matches = scores.count("Graham");

        for (int i = 0; i < n_matches; ++i)
        {
            if (res->second == 66)
            {
                cout << "Key = " << res->first << ", value = " << res->second
                     << endl;
                break;
            }
            ++res;
        }
    }
}
