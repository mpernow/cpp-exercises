#ifndef LIFE_H
#define LIFE_H

const char live_cell{'X'};
const char dead_cell{' '};

// Standard ANSI console with 1-char border
const int rowmax = 23;
const int colmax = 79;

// Game of life parameters
const int min_neighbours = 2;
const int max_neighbours = 3;
const int min_parents = 3;
const int max_parents = 3;

#endif // LIFE_H