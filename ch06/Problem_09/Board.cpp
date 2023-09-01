#include <iostream>
#include <string>
#include "Board.h"
using namespace std;

void Board::add(const char text[]) {
	Board::pointers[next_index++] = new string(text);
}
void Board::print() {
	cout << "***** ***** ***** Bulletin Board ***** ***** *****" << endl;
	for (int i = 0; i < next_index; i++) {
		cout << i << ": " << *(Board::pointers[i]) << endl;
	}
	cout << "\n";
}

Board::~Board() {
	for (int i = 0; i < next_index; i++) {
		delete pointers[i];
	}
}

string* Board::pointers[] = { 0, };
int Board::next_index = 0;
