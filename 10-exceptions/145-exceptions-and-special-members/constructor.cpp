#include <iostream>
#include <stdexcept>

using namespace std;

class StudentGrade
{
    int grade;

  public:
    StudentGrade(int grade) : grade(grade)
    {
        if (grade < 0 || grade > 100)
        {
            // Invalid grade - throw exception
            throw out_of_range("Invalid grade");
        }
    }
};

int main()
{
    int result;
    cout << "Enter the grade between 0 and 100" << endl;
    cin >> result;

    try
    {
        StudentGrade sgrade(result);
        cout << "sgrade created\n";
    }
    catch (const out_of_range &e)
    {
        cout << "StudentGrade constructor threw exception:\n"
             << e.what() << endl;
    }
}
