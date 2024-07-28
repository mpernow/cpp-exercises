#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str{"Say Hello"};
    cout << "str = " << str << endl;

    auto gdx = str.find('H');
    if (gdx != string::npos)
    {
        str.replace(gdx, 5, "Goodbye"); // Replace 5 characters starting from position of first 'H'
    }

    cout << "str = " << str << endl;
}