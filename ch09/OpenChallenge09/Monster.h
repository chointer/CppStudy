#pragma once
#include <ctime>
#include <cstdlib>
#include "GameObject.h"
using namespace std;

class Monster :
	public GameObject
{
public:
	Monster(int startX, int startY, int distance, int max_x, int max_y) :
		GameObject(startX, startY, distance, max_x, max_y) {}
	char getShape() { return 'M'; }
	void move();
};

