#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    const int filesize{10};
    char filebuf[filesize];
    string filename{"input.txt"};

    ifstream ifile(filename);

    if (!ifile)
    {
        cout << "Could not open " << filename << endl;
        return -1;
    }

    ifile.read(filebuf, filesize);
    ifile.close();

    cout << "File data: ";
    cout.write(filebuf, filesize);
    cout << endl;
}