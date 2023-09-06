#pragma once
#include <iostream>
#include "Shape.h"
using namespace std;

class GraphicEditor
{
	Shape* pStart = 0, *pLast = 0;
public:
	GraphicEditor() { cout << " Graphic Editor " << endl; }
	~GraphicEditor() {
		Shape* s = pStart, * s_next;
		while (s) {
			s_next = s->getNext();
			delete s;
			s = s_next;
			cout << "Completely Deleted" << endl;
		}
	}
	void start();
	void insert();
	void del();
	void show();
};

