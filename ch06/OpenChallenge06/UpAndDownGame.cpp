#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "UpAndDownGame.h"
#include "Person.h"
using namespace std;

UpAndDownGame::UpAndDownGame(const char name1[] = "Kim Insu", const char name2[] = "Oh Eunkyung") {
	srand((unsigned)time(0));
	UpAndDownGame::answer = rand() % 100;

	Person players[] = { Person(name1), Person(name2) };
	bool incorrect = true;
	
	cout << "Start Up & Down Game." << endl;

	while (incorrect) {
		incorrect = players[turn].guess();
	}
}

int UpAndDownGame::answer = -1;
int UpAndDownGame::lim_down = 0;
int UpAndDownGame::lim_up = 99;
int UpAndDownGame::turn = 0;