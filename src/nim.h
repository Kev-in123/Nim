#pragma once
#include <random>

class Nim {
private:
    int pile = 18 + rand() % 6;
public:
    int ai_choice();
    int get_pile();
    bool validEntry(int choice);
    void remove_stone(int n);
};
