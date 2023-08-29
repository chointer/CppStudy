#include <iostream>
#include <algorithm>
#include "Person.h"
#include "UpAndDownGame.h"

using namespace std;

bool Person::guess() {
	int g;
	cout << this->name << ">> ";
	cin >> g;
	if (g == UpAndDownGame::answer) {
		cout << this->name << " Win!" << endl;
		return false;
	}
	else {
		if (g > UpAndDownGame::answer) {
			UpAndDownGame::lim_up = min(g, UpAndDownGame::lim_up);
		}
		else {
			UpAndDownGame::lim_down = max(g, UpAndDownGame::lim_down);
		}
		cout << "The answer is between " << UpAndDownGame::lim_down << " and "
			<< UpAndDownGame::lim_up << "." << endl;
		UpAndDownGame::turn = (UpAndDownGame::turn + 1) % 2;

		return true;
	}
}
