#include <iterator>
#include <set>
#include <vector>

extern "C"
{
#include "array.h"
}

int main()
{
    std::set<int> s;
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(1);
    s.insert(5);
    s.insert(9);

    std::vector<int> vec;
    std::copy(s.begin(), s.end(), std::back_inserter(vec));
    array_print(vec.data(), vec.size());
}
