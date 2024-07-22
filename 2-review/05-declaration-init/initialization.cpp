#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print_vec(const vector<int> &vec)
{
    for (auto v : vec)
        cout << v << ", ";
    cout << endl;
}

class Test
{
};

int main()
{
    int x{7};                 // Equivalent to int x = 7;
    string s{"Let us begin"}; // Equivalent to string s("Let us begin");

    cout << "x = " << x << endl;
    cout << "s = \"" << s << "\"" << endl;

    // Preferred, because narrowing conversions are not allowed:
    int y = 7.7; // Generates error, but allowed;
    // int y{7.7};     // Not allowed
    cout << "y = " << y << endl;

    vector<int> vec{4, 2, 3, 5, 1};
    string hello{'H', 'e', 'l', 'l', 'o'};

    cout << "vec = ";
    print_vec(vec);
    cout << endl
         << "hello = \"" << hello << "\"" << endl;

    vector<int> old_one(4);    // Vector with {0, 0, 0, 0}
    vector<int> old_two(4, 2); // Vector with {2, 2, 2, 2}
    vector<int> new_one{4};    // Vector with {4}
    vector<int> new_two{4, 2}; // Vector with {4, 2}

    cout << "old_one = ";
    print_vec(old_one);

    cout << "old_two = ";
    print_vec(old_two);

    cout << "new_one = ";
    print_vec(new_one);

    cout << "new_two = ";
    print_vec(new_two);

    // Avoids ambiguity with initializations of classes
    // Test test();     // Object creation or function declaration?
    Test test{};
}