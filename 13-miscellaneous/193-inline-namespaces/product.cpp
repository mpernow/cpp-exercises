#include <iostream>
#include <string>

namespace product
{
#include "version1.h"
#include "version2.h"

void test()
{
    // This will be from version1 since that namespace is inlined
    refrigerator fridge;
    fridge.print();
}
}  // namespace product

int main() { product::test(); }
