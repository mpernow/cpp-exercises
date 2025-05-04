#include "Date.h"
#include <iostream>

int main()
{
    Date date(04, 05, 2025);
    date.print();
    date.set_day(17);
    date.print();
}
