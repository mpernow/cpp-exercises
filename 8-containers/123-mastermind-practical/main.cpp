#include <algorithm>
#include <iostream>
#include <random>
#include <string>

#include "constants.h"
#include "input.h"
#include "validate.h"

using namespace std;

peg_array populate()
{
    peg_array code{0};
    static mt19937 mt;
    uniform_int_distribution<int> ud(0, constants::ncolours - 1);

    generate(begin(code), end(code),
             [&]() { return constants::colours[ud(mt)]; });

    return code;
}

int main()
{
    peg_array pegs = populate();

    bool winner{false};

    for (int i = 0; i < constants::nturns; ++i)
    {
        peg_array input = get_input();

        int exact = exact_matches(input, pegs);
        int loose = loose_matches(input, pegs) - exact;
        cout << exact << " exact match(es)" << endl;
        cout << loose << " loose match(es)" << endl;

        if (exact == constants::npegs)
        {
            cout << "You have found the correct solution! ";
            for (auto peg : pegs)
                cout << peg;
            cout << endl;
            winner = true;
            break;
        }
    }

    if (!winner)
    {
        cout << "Sorry! The solution was: ";
        for (auto peg : pegs)
            cout << peg;
        cout << endl;
    }
}
