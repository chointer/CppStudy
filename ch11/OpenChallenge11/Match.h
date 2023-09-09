#pragma once
#include <string>
#include <iostream>
#include "PlayerHuman.h"
#include "PlayerComputer.h"
#include "AbstractPlayer.h"
using namespace std;

class Match
{
	AbstractPlayer* P1, * PC;
public:
	Match();
	~Match();
	void run();
};