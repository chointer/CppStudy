#include "Human.h"
#include "Monster.h"
#include "Food.h"
#include "Game.h"

int main() {
	srand((unsigned)time(0));
	int map_x = 20, map_y = 10;
	Game g(map_x, map_y);
	g.play();
}