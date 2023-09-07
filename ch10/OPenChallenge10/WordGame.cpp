#include "WordGame.h"

void WordGame::start() {
	cout << "Start English Word Test. Enter a number except 1~4 to end the game." << endl;
	while (get_problem());
}

bool WordGame::get_problem() {
	// get 4 random idx of words
	int word_indices[4];
	for (int i = 0; i < 4; i++) {
		word_indices[i] = rand() % dict.size();
		for (int j = 0; j < i; j++) {
			if (word_indices[j] == word_indices[i]) i--;
		}
	}

	// choose answer among the words
	int answer_idx_idx = rand() % 4;

	// print a problem;
	cout << dict[word_indices[answer_idx_idx]].get_key() << "?" << endl;
	for (int i = 0; i < 4; i++) {
		cout << '[' << i + 1 << "] ";
		cout << dict[word_indices[i]].get_val() << "  ";
	}
	cout << ":> ";

	int input;
	cin >> input;
	input--;
	
	if (input >= 0 && input < 4) {
		if (input == answer_idx_idx) cout << "Excellent !!" << endl;
		else cout << "Incorrect" << endl;
		cout << endl;
		return true;
	}
	else return false;
}