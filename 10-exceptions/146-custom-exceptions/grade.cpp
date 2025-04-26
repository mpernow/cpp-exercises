#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class bad_student_grade : public out_of_range
{
  public:
    // Default constructor
    bad_student_grade() : out_of_range("Invalid grade: please try again") {}

    // Default constructor that take a string
    bad_student_grade(const char *s) : out_of_range(s) {}
    bad_student_grade(const string &s) : out_of_range(s) {}

    // Use default copy and assignment operators since we don't have data
    // members
    bad_student_grade(const bad_student_grade &other) = default;
    bad_student_grade &operator=(const bad_student_grade &other) = default;

    // Can optionally override the virtual what() function
    // const char *what() const noexcept override
    // {
    //     return "Custom error message";
    // }
};

class StudentGrade
{
    int grade;

  public:
    StudentGrade(int grade) : grade(grade)
    {
        if (grade < 0)
        {
            throw bad_student_grade("negative grade");
        }
        if (grade > 100)
        {
            throw bad_student_grade("above 100");
        }
    }
};

int main()
{
    int result;
    cout << "Enter a grade between 0 and 100" << endl;
    cin >> result;

    try
    {
        StudentGrade sgrade(result);
        cout << "Valid grade entered: " << result << endl;
    }
    catch (const bad_student_grade &e)
    {
        cout << e.what() << endl;
        ;
    }
}
