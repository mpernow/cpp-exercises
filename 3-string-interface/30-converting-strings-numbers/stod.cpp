#include <iostream>
#include <string>

using namespace std;

int main()
{
    string pi{"3.14159"};

    cout << "pi: " << pi << endl;

    size_t n_processed;

    cout << "stoi:\n";
    cout << stoi(pi, &n_processed) << endl;
    cout << n_processed << " characters processed\n\n";
    cout << "stod:\n";
    cout << stod(pi, &n_processed) << endl;
    cout << n_processed << " characters processed\n\n";
}