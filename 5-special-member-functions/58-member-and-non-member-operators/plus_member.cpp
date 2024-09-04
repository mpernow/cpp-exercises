#include <iostream>
#include <string>

using namespace std;

class String
{
    string s;

public:
    String(const char *str) : s(str) {}
    String(const string &s) : s(s) {}

    String operator+(const String &arg)
    {
        return s + arg.s;
    }

    void print() { cout << s << endl; }
};

int main()
{
    String w{"world"}, bang{"!"};
    String wbang = w + bang;
    // String hi = "hello " + w; // Error: Cannot call "hello".operator +(w);
    cout << "wbang: ";
    wbang.print();
    // cout << "hi: "; hi.print();
}