#include "url.h"
#include <algorithm>
#include <iostream>
#include <list>
#include <ostream>
#include <string>

class UrlCollection
{
  public:
    void printUrls()
    {
        for (auto url : m_urlsList)
        {
            std::cout << static_cast<std::string>(url) << std::endl;
        }
    }

    void addUrl(const Url &url)
    {
        auto existingUrl = std::find(m_urlsList.begin(), m_urlsList.end(), url);
        if (existingUrl != m_urlsList.end())
        {
            // url already exists. Remove it and place at the front
            m_urlsList.erase(existingUrl);
        }
        m_urlsList.push_front(url);
    }

  private:
    std::list<Url> m_urlsList{};
};

int main()
{
    Url google{"http", "www.google.com"};
    // Make sure conversion works
    std::cout << static_cast<std::string>(google) << std::endl << std::endl;

    // Create a url collection and add urls to it
    UrlCollection urls;
    urls.addUrl(google);

    Url yahoo{"http", "www.yahoo.com"};
    Url wiki{"http", "www.wikipedia.com"};

    urls.addUrl(yahoo);
    urls.addUrl(wiki);

    // Trying to add google again. It should appear at the front
    urls.addUrl(google);
    urls.printUrls();
}
