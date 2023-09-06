#pragma once
#include <iostream>
#include "GameObject.h"
using namespace std;

class Human : public GameObject
{
public:
	Human(int startX, int startY, int distance, int max_x, int max_y) : 
		GameObject(startX, startY, distance, max_x, max_y) {}
	char getShape() { return 'H'; }
	void move();
};