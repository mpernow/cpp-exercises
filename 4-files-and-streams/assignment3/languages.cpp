#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

struct language
{
    string lang;
    string designer;
    int date;
};

int main()
{
    ifstream infile("languages.txt");

    if (!infile)
    {
        cout << "Could not open file" << endl;
        return -1;
    }

    string line;
    vector<language> languages;
    language lang;

    while (getline(infile, line))
    {
        istringstream is(line);
        is >> lang.lang >> lang.designer >> lang.date;
        languages.push_back(lang);
    }
    for (auto lang : languages)
    {
        cout << lang.lang << ", " << lang.designer << ", " << lang.date << endl;
    }
}