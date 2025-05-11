#include <iostream>
#include <stdexcept>

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

class TokenWrapper
{
    Token token;
    TokenType type;

  public:
    void set_char(char c)
    {
        type = TokenType::Char;
        token.c = c;
    }

    double get_double()
    {
        if (type == TokenType::Double)
            return token.d;
        else
            throw std::invalid_argument("Double member not in use");
    }
};

int main()
{
    TokenWrapper tw;
    tw.set_char('Z');

    try
    {
        double d = tw.get_double();
        cout << d << endl;
    }
    catch (exception &e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }
}
