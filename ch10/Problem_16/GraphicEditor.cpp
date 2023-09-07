#include "GraphicEditor.h"

void GraphicEditor::run() {
	int menu;
	cout << "*** Graphic Editor ***" << endl;

	while (true) {
		cout << "[1] Edit, [2] Remove, [3] Show, [4] Exit >> ";
		cin >> menu;
		switch (menu) {
			case EDIT: edit(); break;
			case REMOVE: remove(); break;
			case SHOW: show(); break;
			case EXIT: 
				cout << "*** Exit Editor ***" << endl;
				return;
			default: cout << "Error" << endl;
		}
	}
}

void GraphicEditor::edit() {
	int shape;
	cout << "  [1] Line, [2] Circle, [3] Rectangle >> ";
	cin >> shape;

	if (shape == 1) v.push_back(new Line());
	else if (shape == 2) v.push_back(new Circle());
	else if (shape == 3) v.push_back(new Rect());
	else cout << "Error" << endl;
}

void GraphicEditor::remove() {
	int idx;
	cout << "  Index to remove >> ";
	cin >> idx;

	if (idx >= v.size()) cout << "Index Error" << endl;
	else {
		delete v[idx];
		v.erase(v.begin() + idx);
	}
}

void GraphicEditor::show() {
	for (int i = 0; i < v.size(); i++) {
		cout << i << ": ";
		v[i]->paint();
	}
}