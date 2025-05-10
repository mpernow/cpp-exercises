#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int main()
{
    // tuple<double, int, string> numbers(1.0, 2, "Three"s);

    auto numbers{make_tuple(1.0, 2, "Three"s)};

    auto x = get<0>(numbers);
    cout << "First element is " << x << endl;

    cout << "Setting second element to 3" << endl;
    get<1>(numbers) = 3;
}
