#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

using namespace std;

bool equal_strings(const string &lhs, const string &rhs)
{
    // Copy the arguments
    string lhs_copy{lhs};
    string rhs_copy{rhs};

    // Convert to uppercase
    transform(begin(lhs_copy), end(lhs_copy), begin(lhs_copy), ::toupper);
    transform(begin(rhs_copy), end(rhs_copy), begin(rhs_copy), ::toupper);

    // compare result
    return lhs_copy == rhs_copy;
}

void test(const string &str1, const string &str2)
{
    cout << str1 << " and " << str2 << " are "
         << (equal_strings(str1, str2) ? "" : "not ") << "equal" << endl;
}

int main()
{
    test("lambda", "Lambda");
    test("lambda", "lambada");
}
