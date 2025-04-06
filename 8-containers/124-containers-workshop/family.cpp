#include <iostream>
#include <map>
#include <string>
#include <vector>

class Family
{
    std::vector<std::string> children;

  public:
    void addChild(const std::string &name) { children.push_back(name); }
    void printChildren()
    {
        for (auto name : children)
        {
            std::cout << name << std::endl;
        }
        std::cout << std::endl;
    }
};

int main()
{
    std::map<std::string, Family> families;

    Family anderssons;
    anderssons.addChild("Anna");
    anderssons.addChild("John");
    anderssons.addChild("Erik");
    anderssons.addChild("Lisa");

    Family johnssons;
    johnssons.addChild("A");
    johnssons.addChild("B");
    johnssons.addChild("C");
    johnssons.addChild("D");

    families.insert({"Andersson", anderssons});
    families.insert({"Johnsson", johnssons});

    for (auto family : families)
    {
        std::cout << family.first << ": " << std::endl;
        family.second.printChildren();
    }
}
