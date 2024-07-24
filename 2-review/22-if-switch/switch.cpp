#include <iostream>

using namespace std;

int main()
{
    char c;
    int ws_count{0};

    const char *arr = "How much whitespace in\t here?";
    cout << "The text to process is \"" << arr << "\"" << endl;

    for (int i = 0; arr[i]; ++i)
    {
        switch (const char c = arr[i]; c)
        {
        case ' ':
            [[fallthrough]]; // Optional attribute to avoid compiler warning
        case '\t':
            [[fallthrough]];
        case '\n':
            ++ws_count;
            break;
        default:
            break;
        }
    }

    cout << "The text contains " << ws_count << " whitespace characters\n";
}