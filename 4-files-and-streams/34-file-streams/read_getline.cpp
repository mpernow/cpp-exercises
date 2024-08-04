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
        while (getline(ifile, text))
        {
            cout << text << endl;
        }

        ifile.close();
    }
}