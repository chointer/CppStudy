#include "Human.h"

void Human::move() {
	char d;
	cout << "Up (w), Left (a), Down (s), Right (d) >> ";
	cin >> d;

	if (d == 'w' && getY() - distance >= 0) y -= distance;
	else if (d == 'a' && getX() - distance >= 0) x -= distance;
	else if (d == 's' && getY() + distance < size_y) y += distance;
	else if (d == 'd' && getX() + distance < size_x) x += distance;
}