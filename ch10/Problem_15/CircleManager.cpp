#include "CircleManager.h"

bool CircleManager::menu() {
	int input;
	cout << "[1] Insert, [2] Delete, [3] Show, [4] End >> ";
	cin >> input;

	if (input == 1) insert();
	else if (input == 2) del();
	else if (input == 3) show();
	else if (input == 4) return false;
	return true;
}

void CircleManager::insert() {
	int radius;
	string name;
	cout << "Enter radius and name >> ";
	cin >> radius >> name;
	arr.push_back(Circle(radius, name));
}

void CircleManager::del() {
	string name;
	cout << "Enter name to erase >> ";
	cin >> name;
	//vector<Circle>::iterator it = arr.begin();
	auto it = arr.begin();
	while (it != arr.end()) {
		if (it->getName() == name) it = arr.erase(it);
		else it++;
	}
}

void CircleManager::show() {
	for_each(arr.begin(), arr.end(), [](Circle c) {cout << c.getName()  << ' ' << c.getArea() << endl; });
}