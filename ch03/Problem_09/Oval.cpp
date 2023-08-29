#include <iostream>
#include "Oval.h"
using namespace std;

Oval::Oval(): Oval(1, 1) {}

Oval::Oval(int w, int h): width(w), height(h) {}

Oval::~Oval() {
	cout << "Oval Distructed : width = " << width << ", height = " << height << endl;
}

int Oval::getWidth() {
	return width;
}

int Oval::getHeight() {
	return height;
}

void Oval::set(int w, int h) {
	width = w;
	height = h;
}

void Oval::show() {
	cout << "width = " << width << ", " << "height = " << height << endl;
}