#pragma once
#include "Human.h"
#include "Monster.h"
#include "Food.h"
#include "GameObject.h"

class Game
{
	GameObject* objs[3];
	char **map;
	int map_x, map_y;
	const int hx = 0, hy = 0, mx = 6, my = 6, fx = 3, fy = 3;
	void show_map();
	bool turn();
public:
	Game(int map_x, int map_y) : map_x(map_x), map_y(map_y) {
		objs[0] = new Human(hx, hy, 1, map_x, map_y);
		objs[1] = new Monster(mx, my, 2, map_x, map_y);
		objs[2] = new Food(fx, fy, 1, map_x, map_y);

		map = new char* [map_y];
		for (int i = 0; i < map_y; i++) {
			map[i] = new char[map_x];
			for (int j = 0; j < map_x; j++) map[i][j] = '-';
		}

		map[hy][hx] = objs[0]->getShape();
		map[my][mx] = objs[1]->getShape();  // 경고? 같은 것이 생기는데 초기 값이 맵 크기보다 넘어갈 수 있음을 걱정하는 것 같다. 임시로 설정한 것이므로 넘어감.
		map[fy][fx] = objs[2]->getShape();
	}
	virtual ~Game() {
		for (int i = 0; i < 3; i++) delete objs[i];
		for (int i = 0; i < map_y; i++) {
			delete[] map[i];
		}
		delete[] map;
	}
	void play() {
		while (turn());
	}
};