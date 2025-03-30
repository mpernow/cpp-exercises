#include <iostream>
#include <map>

using namespace std;

using level_map = map<int, string>;

void print_game(const map<int, level_map> &game_map)
{
    for (auto [l_no, l_map] : game_map)
    {
        cout << "Level number: " << l_no << " map: " << endl;
        for (auto [position, object] : l_map)
            cout << position << ", " << object << endl;
    }
    cout << endl;
}

int main()
{
    level_map level_one_map = {{1, "player"}, {10, "door"}};
    level_map level_two_map = {{5, "player"}, {10, "monster"}};

    map<int, level_map> game_map = {{1, level_one_map}, {2, level_two_map}};

    print_game(game_map);

    cout << "Inserting a new entity into level 2" << endl;
    auto level2 = game_map.find(2);

    if (level2 != end(game_map))
        level2->second.insert({3, "magic wand"});

    print_game(game_map);

    cout << "Inserting a new level" << endl;
    level_map level_three_map = {{7, "player"}, {8, "bomb"}};

    game_map.insert({3, level_three_map});

    print_game(game_map);

    cout << "Removing elements with key 10 from level 2" << endl;
    auto &lmap = level2->second;
    auto ten = lmap.find(10);
    if (ten != end(lmap))
        lmap.erase(ten);

    print_game(game_map);
}
