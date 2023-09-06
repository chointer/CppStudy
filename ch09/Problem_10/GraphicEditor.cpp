#include "GraphicEditor.h"
#include "Line.h"
#include "Circle.h"
#include "Rect.h"

void GraphicEditor::start() {
	int input;
	while (true) {
		cout << "[1] Insert, [2] Delete, [3] Show All, [4] End >> ";
		cin >> input;

		if (input == 1) insert();
		else if (input == 2) del();
		else if (input == 3) show();
		else if (input == 4) break;

		cout << endl;
	}
}

void GraphicEditor::insert() {
	int input;
	cout << "[1] Line, [2] Circle, [3] Rectangle >> ";
	cin >> input;

	if (input == 1) {
		if (pStart) pLast = pLast->add(new Line());
		else pStart = pLast = new Line();
	}
		
	else if (input == 2) {
		if (pStart) pLast = pLast->add(new Circle());
		else pStart = pLast = new Circle();
	}

	else if (input == 3) {
		if (pStart) pLast = pLast->add(new Rect());
		else pStart = pLast = new Rect();
	}
}
void GraphicEditor::del() {
	int idx;
	cout << "Index of the shape to delete >> ";
	cin >> idx;

	if (idx == 0) pStart = pStart->getNext();
	else {
		Shape* pPre = pStart, *pDel = pStart->getNext();
		for (int i = 1; i < idx; i++) {
			pPre = pPre->getNext();
			pDel = pDel->getNext();
			pPre->add(pDel->getNext());
		}
	}
}
void GraphicEditor::show() {
	int i = 0;
	Shape* p = pStart;
	while (p) {
		cout << i++ << ": ";
		p->paint();
		p = p->getNext();
	}
}