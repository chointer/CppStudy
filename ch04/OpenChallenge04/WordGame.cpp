#include "WordGame.h"
#include "Player.h"
#include <string>
#include <iostream>

using namespace std;

WordGame::WordGame() {
	// The number of players
	cout << "Start Word Game!" << endl;
	cout << "How many players? :";
	cin >> N;
	
	// Generate Players
	players = new Player[N];

	lastword = "¾Æ¹öÁö";
	length_lw = lastword.length();
}

WordGame::~WordGame() {
	delete [] players;
}

void WordGame::start() {
	cout << "The start word is " << lastword << endl;

	int idx = 0;

	while (true) {
		cout << players[idx].getname() << ">> ";
		cin >> word;

		if (lastword.at(length_lw - 2) == word.at(0) &&
			lastword.at(length_lw - 1) == word.at(1)) {
			lastword = word;
			length_lw = lastword.length();
			if (idx == 2) idx = 0;
			else idx++;
		}

		else {
			cout << "Lose!" << endl;
			break;
		}
	}
}
