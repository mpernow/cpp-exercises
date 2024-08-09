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
    ifstream infile("languages2.txt");

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
        is >> lang.lang;

        string designer;
        string temp;
        is >> designer;

        is >> temp;
        while (!isdigit(temp[0]))
        {
            designer += " " + temp;
            is >> temp;
        }

        lang.designer = designer;
        lang.date = stoi(temp);
        languages.push_back(lang);
    }
    for (auto lang : languages)
    {
        cout << lang.lang << ", " << lang.designer << ", " << lang.date << endl;
    }
}
