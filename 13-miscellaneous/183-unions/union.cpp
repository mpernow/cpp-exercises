#include <iostream>

using namespace std;

union Token
{
    char c;
    int i;
    double d;
};

int main()
{
    Token token;
    token.c = 'Z';

    cout << token.d << endl;  // Undefined value, d not in use
}
