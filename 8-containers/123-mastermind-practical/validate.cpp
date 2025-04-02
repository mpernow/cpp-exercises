#include <algorithm>
#include <iterator>
#include <string>

#include "validate.h"

using namespace std;

int exact_matches(const peg_array &guess, const peg_array &solution)
{
    peg_array matches;
    transform(begin(guess), end(guess), begin(solution), begin(matches),
              [](const char c1, const char c2)
              { return (c1 == c2) ? c1 : '\0'; });

    return count_if(begin(matches), end(matches),
                    [](const char c) { return c != '\0'; });
}

int loose_matches(const peg_array &guess, const peg_array &solution)
{
    string copy_guess;

    int count{0};

    copy(begin(guess), end(guess), back_inserter(copy_guess));

    for (auto colour = begin(solution); colour != end(solution); ++colour)
    {
        auto it = find_if(begin(copy_guess), end(copy_guess),
                          [=](const char c) { return c == *colour; });

        if (it != end(copy_guess))
        {
            ++count;
            copy_guess.erase(it);
        }
    }

    return count;
}
