#include "Food.h"

void Food::get_moves() {
	
	// Random numbers without duplicates
	int move_indices[3];
	for (int i = 0; i < 3; i++) {
		move_indices[i] = rand() % 5;
		for (int j = 0; j < i; j++) {
			if (move_indices[i] == move_indices[j]) i--;
		}
	}

	// Allocate
	for (int i = 0; i < 5; i++) moves[i] = -1;
	for (int i = 0; i < 3; i++) moves[move_indices[i]] = rand() % 4;
}

void Food::move() {
	int d = moves[idx_move];
	idx_move++;
	if (idx_move == 5) {
		get_moves();
		idx_move = 0;
	}

	if (d == 0 && getY() - distance >= 0) y -= distance;
	else if (d == 1 && getX() - distance >= 0) x -= distance;
	else if (d == 2 && getY() + distance < size_y) y += distance;
	else if (d == 3 && getX() + distance < size_x) x += distance;
}