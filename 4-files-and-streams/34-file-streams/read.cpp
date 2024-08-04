#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    ifstream ifile{"text.txt"};

    if (ifile)
    {
        string text{""};
        while (ifile >> text) // Read a word. Returns false when reaching end
        {
            cout << text << ", ";
        }

        cout << endl;
        ifile.close();
    }
}