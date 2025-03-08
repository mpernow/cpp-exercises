#include <iostream>
#include <iterator>
#include <random>
#include <vector>

using namespace std;

void print(const vector<int> &vec)
{
    ostream_iterator<int> oi(cout, ", ");
    copy(vec.begin(), vec.end(), oi);
    cout << endl;
}

int main()
{
    vector<int> vec{3, 1, 4, 1, 5, 9};
    static mt19937 mt;

    cout << "Vector before shuffling:\n";
    print(vec);

    uniform_int_distribution<int> uid(0, vec.size() - 1);

    for (int i = 0; i < vec.size(); ++i)
        swap(vec[i], vec[uid(mt)]);

    cout << "Vector after swap:\n";
    print(vec);
}
