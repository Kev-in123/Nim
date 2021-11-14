#include <random>
#include "nim.h"

int Nim::ai_choice() {
	if ((this -> pile - 1) % 4 == 1) {
		this -> pile -= 1;
		return 1;
	}
	if ((this -> pile - 3) % 4 == 1) {
		this -> pile -= 3;
		return 3;
	}
	if ((this -> pile - 4) % 4 == 1) {
		this -> pile -= 4;
		return 4;
	}

	int n = this -> choices[rand() % 3];
	while (!validEntry(n)) {
		n = this -> choices[rand() % 3];
	}
	this -> pile -= n;
	return n;
}

int Nim::get_pile() {
	return this -> pile;
}

bool Nim::validEntry(int choice) {
	return (choice == 1 || choice == 3 || choice == 4) && choice <= this -> pile;
}

void Nim::remove_stone(int n) {
	this -> pile -= n;
}

