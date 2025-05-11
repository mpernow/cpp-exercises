#include <iostream>
#include <variant>

using namespace std;

int main()
{
    variant<char, int, double> v;
    v = 'Z';

    if (holds_alternative<double>(v))
        cout << get<double>(v) << endl;
    else
        cout << "Double member not in use" << endl;
}
