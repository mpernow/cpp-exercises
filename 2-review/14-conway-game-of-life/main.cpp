// Main file for Conway's game of life
// Compile with g++ -o main cell.cpp grid.cpp main.cpp
#include "grid.h"

int main(int argc, char *argv[])
{
    std::cout << "Conway's game of life" << std::endl;
    std::cout << "Press the return key to display each generation" << std::endl;

    // Wait for user to press return key
    std::cin.get();

    // Grid for the first generation
    grid current_generation;

    // Populate the grid randomly
    current_generation.randomize();

    while (true)
    {
        current_generation.draw();

        std::cin.get();

        grid next_generation;

        calculate(current_generation, next_generation);

        current_generation.update(next_generation);
    }

    std::cout << "\x1b[" << 0 << ";" << rowmax - 1 << "H";
}