#include <iostream>

#include "student.hpp"

using namespace std;

bool operator==(const student &lhs, const student &rhs)
{
    if (lhs.name == rhs.name)
    {
        return true;
    }
    return false;
}

bool operator!=(const student &lhs, const student &rhs)
{
    return !(lhs == rhs);
}

bool operator<(const student &lhs, const student &rhs)
{
    return (lhs.name < rhs.name);
}

void student::print()
{
    cout << "Name: " << name << ", id: " << id << endl;
}