#pragma once
#include <string>
using namespace std;

class AbstractPlayer
{
	string name;
protected:
	enum gbb { ROCK, SCISSORS, PAPER };
public:
	AbstractPlayer(string name) { this->name = name; }
	virtual int turn() = 0;
	string getName() { return name; }
};
