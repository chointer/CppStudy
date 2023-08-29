#pragma once
#include <string>
#include "Player.h"
using namespace std;

class WordGame
{
	int N;
	Player* players;
	string lastword, word;
	int length_lw;
public:
	WordGame();
	~WordGame();
	void start();
};