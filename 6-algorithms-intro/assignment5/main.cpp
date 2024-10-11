#include <vector>
#include <iostream>
#include <algorithm>

void print_vec(std::vector<int> vec)
{
    for (auto i : vec)
        std::cout << i << ", ";
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vec{1, 2, 3, 4, 5};
    print_vec(vec);

    std::sort(begin(vec), end(vec), [](const int lhs, const int rhs)
              { return lhs > rhs; });
    print_vec(vec);
}