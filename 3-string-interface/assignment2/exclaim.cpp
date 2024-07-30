#include "exclaim.h"

std::string exclaim(const std::string &str)
{
    std::string str_copy = str;

    for (auto &c : str_copy)
    {
        if (ispunct(c))
            c = '!';
    }
    return str_copy;
}