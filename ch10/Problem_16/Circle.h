#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class Circle : public Shape {
protected:
	void draw() { cout << "Circle" << endl; }
};

class Rect : public Shape {
protected:
	void draw() { cout << "Rectangle" << endl; }
};

class Circle : public Shape {
protected:
	void draw() { cout << "Line" << endl; }
};