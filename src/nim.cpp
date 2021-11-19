#include <random>
#include "nim.h"

int Nim::ai_choice() {
    for (int i = 1; i < 4; i++) {
	if ((pile - i) % 4 == 1) {
	    return i;
	}
    }
    int n = (rand() % 3) + 1;
    while (!validEntry(n)) {
	n = (rand() % 3) + 1;
    }
    return n;
}

int Nim::get_pile() {
    return this->pile;
}

bool Nim::validEntry(int choice) {
    return (1 <= choice && choice <= 3) && choice <= this->pile;
}

void Nim::remove_stone(int n) {
    this->pile -= n;
}
