#include "Monster.h"

void Monster::move() {
	int d = rand() % 4; // direction

	if (d == 0 && getY() - distance >= 0) y -= distance;
	else if (d == 1 && getX() - distance >= 0) x -= distance;
	else if (d == 2 && getY() + distance < size_y) y += distance;
	else if (d == 3 && getX() + distance < size_x) x += distance;
}