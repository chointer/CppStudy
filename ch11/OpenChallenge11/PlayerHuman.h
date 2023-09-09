#pragma once
#include <string>
#include <iostream>
#include "AbstractPlayer.h"
using namespace std;

class PlayerHuman : public AbstractPlayer 
{
public:
	PlayerHuman(string name) : AbstractPlayer(name) { }
	int turn();
};