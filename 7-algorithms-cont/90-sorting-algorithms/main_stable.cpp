#include <algorithm>
#include <iostream>
#include <vector>

#include "student.h"

using namespace std;

int main()
{
    student stu1("John Smith", 561234);
    student stu2("John Smith", 453811);
    student stu3("Jack Jones", 692837);

    vector<student> students = {stu1, stu2, stu3};

    cout << "Vector before sorting:" << endl;
    for (auto student : students)
        student.print();

    // stable_sort: the John Smiths will remain in the same order
    stable_sort(begin(students),
                end(students));  // Sort the elements using < operator

    cout << "Vector after sorting:" << endl;
    for (auto student : students)
        student.print();
}
