#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    ostringstream output;

    string data{"It is time to say "};
    output << data;

    auto marker = output.tellp();
    cout << data.size() << " characters written to stream\n";
    cout << "Stream marker is " << marker << " bytes into the stream\n";

    output << "hello";
    cout << "Stream marker is now " << output.tellp() << " bytes into the stream\n";

    cout << output.str() << endl;

    if (marker != -1)
        output.seekp(marker);

    output << "goodnight";

    cout << output.str() << endl;
}