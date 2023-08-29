#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

Player::Player() {
	cout << "Type a Name without space >> ";
	cin >> name;
}

Player::~Player() {
	cout << name << endl;
}

string Player::getname() {
	return name;
}

