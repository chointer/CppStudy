#pragma once
#include <ctime>
#include <cstdlib>
#include "GameObject.h"
using namespace std;

class Food : public GameObject
{
	void get_moves();
	int moves[5];
	int idx_move = 0;
public:
	Food(int startX, int startY, int distance, int max_x, int max_y) :
		GameObject(startX, startY, distance, max_x, max_y) {
		get_moves();
	}
	char getShape() { return '@'; }
	void move();
};