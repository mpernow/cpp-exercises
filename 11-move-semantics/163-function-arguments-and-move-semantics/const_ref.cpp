#include <iostream>
#include <string>

using namespace std;

class Test
{
    string m_str;

  public:
    Test(const string &str) : m_str(str) {}
};

int main()
{
    string name;
    Test ltest(name);  // str is copied into m_str

    Test rtest(std::move(name));  // str is copied into m_str
}
