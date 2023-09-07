#pragma once
#include <iostream>
#include <vector>
#include "Shape.h"
#include "ShapeDerived.h"
using namespace std;

class GraphicEditor
{
	enum menu_type {EDIT=1, REMOVE=2, SHOW=3, EXIT=4};
	vector<Shape*> v;
public:
	void run();
	void edit();
	void remove();
	void show();
};