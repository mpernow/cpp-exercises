#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<int> p1{new int(42)};

    unique_ptr<int[]> p2{new int[6]};
    // Usually better to use std::array or std::vector for this

    // C++14
    auto p3{make_unique<int>(42)};

    auto p4{make_unique<int[]>(6)};
}
