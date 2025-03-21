#include "url.h"
#include <iostream>

Url::Url(const std::string &prot, const std::string &res)
    : protocol(prot), resource(res)
{
}
void Url::printUrl() { std::cout << protocol + "://" + resource << std::endl; }

Url::operator std::string() const { return protocol + "://" + resource; }

bool Url::operator==(const Url &other)
{
    return (this->protocol == other.protocol &&
            this->resource == other.resource);
}
