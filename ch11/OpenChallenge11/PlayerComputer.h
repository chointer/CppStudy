#pragma once
#include <ctime>
#include <cstdlib>
#include <string>
#include <iostream>
#include "AbstractPlayer.h"
using namespace std;

class PlayerComputer : public AbstractPlayer
{
public:
	PlayerComputer(string name) : AbstractPlayer(name) { }
	int turn() { 
		srand((unsigned)time(0));
		int n = rand() % 3;
		cout << "Computer: ";
		switch (n) {
		case SCISSORS: cout << "Scissors" << endl; break;
		case ROCK: cout << "Rock" << endl; break;
		case PAPER: cout << "Paper" << endl; break;
		}
		return n;
	}
};