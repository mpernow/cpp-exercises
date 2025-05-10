#include <iostream>

using namespace std;

enum class TokenType
{
    Char,
    Int,
    Double
};

union Token
{
    char c;
    int i;
    double d;
};

struct TaggedToken
{
    Token token;
    TokenType type;
};

int main()
{
    TaggedToken tk;
    tk.type = TokenType::Char;
    tk.token.c = 'Z';

    if (tk.type == TokenType::Double)
        cout << tk.token.d << endl;
    else
        cout << "Double member not in use" << endl;
}
