#include <iostream>
#include <map>

using namespace std;

using level_map = map<int, string>;

int main()
{
    level_map level_one_map = {{1, "player"}, {10, "door"}};
    level_map level_two_map = {{5, "player"}, {10, "monster"}};

    map<int, level_map> game_map = {{1, level_one_map}, {2, level_two_map}};
}
