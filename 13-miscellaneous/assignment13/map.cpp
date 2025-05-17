#include <iterator>
#include <map>
#include <utility>
#include <vector>

extern "C"
{
#include "array.h"
}

int main()
{
    std::map<int, int> m;
    m.insert(std::make_pair(1, 3));
    m.insert(std::make_pair(2, 1));
    m.insert(std::make_pair(3, 4));
    m.insert(std::make_pair(4, 1));
    m.insert(std::make_pair(5, 5));
    m.insert(std::make_pair(6, 9));

    std::vector<int> key_vec;
    std::vector<int> val_vec;
    for (auto [key, val] : m)
    {
        key_vec.push_back(key);
        val_vec.push_back(val);
    }
    array_print(key_vec.data(), key_vec.size());
    array_print(val_vec.data(), val_vec.size());
}
