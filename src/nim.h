#pragma once
class Nim {
	private:
		int pile = 25;
		int choices[3] = { 1, 3, 4 };

	public:
		int ai_choice();
		int get_pile();
		bool validEntry(int choice);
		void remove_stone(int n);
};
