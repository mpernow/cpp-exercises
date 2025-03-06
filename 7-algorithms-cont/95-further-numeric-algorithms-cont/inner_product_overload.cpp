#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

void print(const vector<int> &vec)
{
    for (auto v : vec)
        cout << v << ", ";
    cout << endl;
}

int main()
{
    vector<double> expected{0.1, 0.2, 0.3, 0.4, 0.5};
    vector<double> actual{0.09, 0.22, 0.27, 0.41, 0.52};

    auto max_diff = inner_product(
        cbegin(expected), cend(expected), cbegin(actual), 0.0,
        [](auto a, auto b) { return max(a, b); },     // Reduce operation
        [](auto l, auto r) { return fabs(r - l); });  // Transform operation

    cout << "Maximum difference: " << max_diff << endl;
}
