#include <iostream>
#include <map>
#include <set>
#include <string>
#include <unordered_map>

int main()
{
    // std::multimap<std::string, std::string> families;
    std::unordered_multimap<std::string, std::string> families;

    families.insert({"Andersson", "John"});
    families.insert({"Andersson", "Lisa"});
    families.insert({"Andersson", "Erik"});

    families.insert({"Johnsson", "A"});
    families.insert({"Johnsson", "B"});
    families.insert({"Johnsson", "C"});
    families.insert({"Johnsson", "D"});

    std::set<std::string> seen_families;
    for (auto family : families)
    {
        if (auto [it, inserted] = seen_families.insert(family.first); inserted)
        {
            std::cout << family.first << ": " << std::endl;
            auto children = families.find(family.first);
            auto n_children = families.count(family.first);

            for (int i = 0; i < n_children; ++i)
            {
                std::cout << children->second << std::endl;
                ++children;
            }
        }
    }
}
