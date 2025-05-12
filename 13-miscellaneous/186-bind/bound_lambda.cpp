#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool match(const string &animal, const string &species)
{
    cout << R"(1st argument is ")" << animal << R"(", 2nd argument is ")"
         << species << "\"" << endl;
    return animal == species;
}

int main()
{
    vector<string> animals = {"cat",  "dog", "tiger",  "lion",
                              "bear", "cat", "giraffe"};

    cout << "The vector contains ";
    cout << count_if(begin(animals), end(animals),
                     [species = "cat"s](const string &animal)
                     { return match(animal, species); });
    cout << R"( occurences of the word "cat")" << endl;
}
