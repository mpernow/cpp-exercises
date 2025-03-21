#ifndef URL_H_
#define URL_H_

#include <string>

class Url
{
    std::string protocol;
    std::string resource;

  public:
    Url(const std::string &prot, const std::string &res);
    void printUrl();
    bool operator==(const Url &other);
    explicit operator std::string() const;
};

#endif  // URL_H_
