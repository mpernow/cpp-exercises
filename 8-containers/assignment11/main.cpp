#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

void printVec(const std::vector<std::pair<std::string, int>> &vec)
{
    for (auto el : vec)
        std::cout << el.first << ": " << el.second << std::endl;
    std::cout << std::endl;
}

void printMap(const std::map<std::string, int> &m)
{
    for (auto el : m)
        std::cout << el.first << ": " << el.second << std::endl;
    std::cout << std::endl;
}

int main()
{
    std::vector<std::pair<std::string, int>> wordVec;
    std::map<std::string, int> wordMap;
    std::string words;

    std::cout << "Enter some words separated by space: ";
    std::getline(std::cin, words);

    std::istringstream iss(words);
    std::string word;
    while (iss >> word)
    {
        if (!word.empty())
        {
            wordVec.push_back({word, word.length()});
            wordMap[word] = word.length();
        }
    }

    std::cout << "Vector: " << std::endl;
    printVec(wordVec);

    std::cout << "Map: " << std::endl;
    printMap(wordMap);
}
