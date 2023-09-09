#pragma once
#include <iostream>
#include <iomanip>
#include <map>
#include <vector>
using namespace std;

class CoffeeMachineManager
{
	enum Buttons {CO_REGULAR=1, CO_SUGER, CO_BLACK, FILL, EXIT};
	map<string, int> igrs;			// ingredients, left
	map<string, vector<string>> cofs;	// coffees, required_ingredients
	const int full = 3;

public:
	CoffeeMachineManager();
	void run();
	bool get_coffee(string);
	void fill();
	friend ostream& operator<< (ostream&, CoffeeMachineManager&);
};

