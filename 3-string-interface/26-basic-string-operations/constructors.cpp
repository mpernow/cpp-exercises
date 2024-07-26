#include <iostream>
#include <string>

using namespace std;

int main()
{
    // Default constructor
    string empty;
    cout << "empty has " << empty.size() << " characterss: " << empty << endl;

    // C-style string
    string hi{"Hello"};
    cout << "hi has" << hi.size() << " characters: " << hi << endl;

    // Repeated value
    string triple_x(3, 'x');
    cout << "triple_x has " << triple_x.size() << " characters: " << triple_x << endl;

    // Initializer list
    string howdy{'H', 'e', 'l', 'l', 'o'};
    cout << "howdy has " << howdy.size() << " characters: " << howdy << endl;

    // Substring
    string hello(hi, 1); // "ello"
    cout << "hello has " << hello.size() << " characters: " << hello << endl;

    string hello2(hi, 1, 3); // "ell"
    cout << "hello2 has " << hello2.size() << " characters: " << hello2 << endl;
}