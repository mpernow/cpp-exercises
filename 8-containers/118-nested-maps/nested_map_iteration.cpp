#include <iostream>
#include <map>

using namespace std;

using level_map = map<int, string>;

int main()
{
    level_map level_one_map = {{1, "player"}, {10, "door"}};
    level_map level_two_map = {{5, "player"}, {10, "monster"}};

    map<int, level_map> game_map = {{1, level_one_map}, {2, level_two_map}};

    cout << "Game map" << endl;

    for (auto level : game_map)
    {
        cout << "Level number " << level.first << " map: " << endl;
        for (auto elem : level.second)
            cout << elem.first << ", " << elem.second << endl;
    }

    // For C++17
    for (auto [l_no, l_map] : game_map)
    {
        cout << "Level number: " << l_no << " map: " << endl;
        for (auto [position, object] : l_map)
            cout << position << ", " << object << endl;
    }
}
