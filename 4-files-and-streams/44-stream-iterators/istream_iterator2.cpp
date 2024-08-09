#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    istream_iterator<string> iis(cin);
    istream_iterator<string> eof;

    vector<string> vs;

    while (iis != eof) // Stopped by end-of-file key (CTRL+D on linux, CTRL+Z on Windows)
    {
        vs.push_back(*iis);
        ++iis;
    }

    for (auto s : vs)
        cout << s << endl;
}