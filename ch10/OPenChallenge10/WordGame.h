#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "Word.h"
using namespace std;

class WordGame
{
	vector<Word> dict;
public:
	WordGame(vector<Word>& v) :dict(v) {
		srand((unsigned)time(0));
	}
	void start();
	bool get_problem();
};