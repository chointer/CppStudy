#include "Game.h"

void Game::show_map() {
	for (int i = 0; i < map_y; i++) {
		for (int j = 0; j < map_x; j++) {
			cout << map[i][j];
		}
		cout << '\n';
	}
}

bool Game::turn() {
	show_map();
	
	// erase map & move
	for (int i = 0; i < 3; i++) {
		map[objs[i]->getY()][objs[i]->getX()] = '-';
		objs[i]->move();
	}

	// draw map
	for (int i = 0; i < 3; i++) {
		map[objs[i]->getY()][objs[i]->getX()] = objs[i]->getShape();
	}

	if (objs[1]->collide(objs[0]) || objs[1]->collide(objs[2])) {
		cout << "Monster Wins !!" << endl;
		return false;
	}

	if (objs[0]->collide(objs[2])) {
		cout << "Human Wins !!" << endl;
		return false;
	}

	return true;
}