#ifndef URL_H
#define URL_H

#include <string>

class Url
{
    std::string protocol;
    std::string resource;

public:
    Url(const std::string &prot, const std::string &res);
    void printUrl();
};

#endif