#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofile{"log.txt"};

    if (!ofile)
    {
        cout << "Could not open file" << endl;
        return -1;
    }

    for (int i = 0; i < 1'000'000; ++i)
    {
        cout << i << "\n";
        ofile << i << "\n"
              << flush; // Without the flush, the file stream loses its buffer when program terminates. Note: endl is the same as \n << flush

        if (i == 66666)
            terminate();
    }

    ofile.close();
}