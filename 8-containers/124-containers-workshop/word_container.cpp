#include <deque>
#include <iostream>
#include <list>
#include <set>
#include <sstream>
#include <string>
#include <vector>

void printVec(const std::vector<std::string> &vec)
{
    for (auto el : vec)
        std::cout << el << std::endl;
    std::cout << std::endl;
}

void printList(const std::list<std::string> &l)
{
    for (auto el : l)
        std::cout << el << std::endl;
    std::cout << std::endl;
}

void printDeque(const std::deque<std::string> &dq)
{
    for (auto el : dq)
        std::cout << el << std::endl;
    std::cout << std::endl;
}

void printSet(const std::set<std::string> &s)
{
    for (auto el : s)
        std::cout << el << std::endl;
    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> wordVec;
    std::list<std::string> wordList;
    std::deque<std::string> wordDq;
    std::set<std::string> wordSet;
    std::string words;

    std::cout << "Enter some words separated by space: ";
    std::getline(std::cin, words);

    std::istringstream iss(words);
    std::string word;
    while (iss >> word)
    {
        if (!word.empty())
        {
            wordVec.push_back(word);
            // wordList.push_back(word);
            wordList.push_front(word);
            // wordDq.push_back(word);
            wordDq.push_front(word);
            wordSet.insert(word);
        }
    }

    std::cout << "Vector: " << std::endl;
    printVec(wordVec);
    std::cout << "List: " << std::endl;
    printList(wordList);
    std::cout << "Deque: " << std::endl;
    printDeque(wordDq);
    std::cout << "Set: " << std::endl;
    printSet(wordSet);
}
