#include <iostream>
#include <random>
#include <time.h>
#include "nim.h"

int main()
{
    srand(time(NULL));
    Nim nim;
    int in, ai;
    std::cout << "Welcome to Nim!\n";
    std::cout << "The person who takes the last stone loses\n\n";
    while (nim.get_pile() > 0) {
        std::cout << "There are " << nim.get_pile() << " stones in the pile\n";
        std::cout << "How many stones would you like to take (1, 2, 3): "; std::cin >> in;
        while (!nim.validEntry(in)) {
            std::cout << "Invalid input\n";
            std::cout << "How many stones would you like to take (1, 2, 3): "; std::cin >> in;
        }
        nim.remove_stone(in);
        if (nim.get_pile() == 0) {
            std::cout << "You lose!";
            return 0;
        }
        ai = nim.ai_choice();
        nim.remove_stone(ai);
        std::cout << "The AI took " << ai << " stones\n\n";
        if (nim.get_pile() == 0) {
            std::cout << "You win!";
            return 0;
        }
    }
    std::cout << "I suck at C++";
    return 0;
}
