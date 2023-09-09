#include "PlayerHuman.h"

int PlayerHuman::turn() {
	string rsp;		// RockScissorsPaper
	while (true) {
		cout << this->getName() << ">> ";
		cin >> rsp;
		if (rsp == "Scissors") return SCISSORS;
		else if (rsp == "Rock") return ROCK;
		else if (rsp == "Paper") return PAPER;
		else continue;
	}
}