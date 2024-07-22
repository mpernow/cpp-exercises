#include <iostream>
#include "url.h"

Url::Url(const std::string &prot, const std::string &res) : protocol(prot), resource(res){};
void Url::printUrl()
{
    std::cout << protocol + "://" + resource << std::endl;
}