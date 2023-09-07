#pragma once
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "Circle.h"
using namespace std;

class CircleManager
{
	vector<Circle> arr;
public:
	void start() {
		cout << "*** Program inserting or deleting Circles. ***" << endl;
		while (menu());
	}
	bool menu();
	void insert();
	void del();
	void show();
};

