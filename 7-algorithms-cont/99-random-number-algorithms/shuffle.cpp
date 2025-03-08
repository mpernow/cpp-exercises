#include <algorithm>
#include <iostream>
#include <random>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec{3, 1, 4, 1, 5, 9};
    mt19937 mt;

    cout << "Vector before shuffling: " << endl;
    for (auto v : vec)
        cout << v << ", ";
    cout << endl;

    shuffle(begin(vec), end(vec), mt);

    cout << "Vector after shuffling: " << endl;
    for (auto v : vec)
        cout << v << ", ";
    cout << endl;
}
