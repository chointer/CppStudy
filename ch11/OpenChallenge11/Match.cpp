#include "Match.h"

Match::Match() {
	string name;
	cout << "*** Scissors Rock Paper Match of Computer vs. Human ***" << endl;
	cout << "Enter Player Name >> ";
	cin >> name;
	P1 = new PlayerHuman(name);
	PC = new PlayerComputer("Computer");
}

Match::~Match() {
	delete P1;
	delete PC;
}

void Match::run() {
	int P1_turn, PC_turn;

	while (true) {
		P1_turn = P1->turn();
		PC_turn = PC->turn();
		if (P1_turn < PC_turn || (P1_turn == 2 && PC_turn == 0)) {
			cout << P1->getName() << " wins." << endl;
			break;
		}
		else if (P1_turn > PC_turn || (P1_turn == 0 && PC_turn == 2)) {
			cout << PC->getName() << " wins." << endl;
			break;
		}
		else cout << "Draw" << endl;
	}
	
}