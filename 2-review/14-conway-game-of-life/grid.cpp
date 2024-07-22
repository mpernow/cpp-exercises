#include "grid.h"

void grid::create(int row, int column)
{
    cells[row][column].create();
}

void grid::draw()
{
    // ANSI control command
    // \x1b means "escape"
    // Escape[2J clears the screen and returns the cursor to the "home" position
    std::cout << "\x1b[2J";

    for (int row = 0; row < rowmax; ++row)
    {
        for (int col = 0; col < colmax; ++col)
        {
            cells[row][col].draw(row, col);
        }
    }
}

void grid::randomize()
{
    const int factor = 5;
    const int cutoff = RAND_MAX / factor;
    time_t now;
    time(&now);
    srand(now);

    for (int row = 1; row < rowmax; ++row)
    {
        for (int col = 1; col < colmax; ++col)
        {
            if (rand() / cutoff == 0)
            {
                create(row, col);
            }
        }
    }
}

bool grid::will_survive(int row, int col)
{
    if (!cells[row][col].is_alive())
    {
        // No cell here
        return false;
    }

    // Find the number of live neighbours
    int neighbours = cells[row - 1][col - 1].is_alive() +
                     cells[row - 1][col].is_alive() +
                     cells[row - 1][col + 1].is_alive() +
                     cells[row][col - 1].is_alive() +
                     cells[row][col + 1].is_alive() +
                     cells[row + 1][col - 1].is_alive() +
                     cells[row + 1][col].is_alive() +
                     cells[row + 1][col + 1].is_alive();

    if (neighbours < min_neighbours || neighbours > max_neighbours)
    {
        // Cell dies
        return false;
    }

    return true;
}

// Will a cell be born in the next generation?
bool grid::will_create(int row, int col)
{
    if (cells[row][col].is_alive())
    {
        return false;
    }

    int parents = cells[row - 1][col - 1].is_alive() +
                  cells[row - 1][col].is_alive() +
                  cells[row - 1][col + 1].is_alive() +
                  cells[row][col - 1].is_alive() +
                  cells[row][col + 1].is_alive() +
                  cells[row + 1][col - 1].is_alive() +
                  cells[row + 1][col].is_alive() +
                  cells[row + 1][col + 1].is_alive();

    if (parents < min_parents || parents > max_parents)
    {
        return false;
    }

    return true;
}

void grid::update(const grid &next)
{
    for (int row = 1; row < rowmax; ++row)
    {
        for (int col = 1; col < colmax; ++col)
        {
            cells[row][col] = next.cells[row][col];
        }
    }
}

void calculate(grid &old_generation, grid &new_generation)
{
    for (int row = 1; row < rowmax; ++row)
    {
        for (int col = 1; col < colmax; ++col)
        {
            if (old_generation.will_survive(row, col))
            {
                new_generation.create(row, col);
            }
            else if (old_generation.will_create(row, col))
            {
                new_generation.create(row, col);
            }
        }
    }
}