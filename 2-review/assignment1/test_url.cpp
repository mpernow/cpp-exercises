// test_url.cpp
// compile with: g++ -o test_url url.cpp test_url.cpp
#include <iostream>
#include "url.h"

int main()
{
    Url url{"http", "www.example.com/index.html"};
    url.printUrl();
}