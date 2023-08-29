#include <iostream>
#include <string>
#include "Family.h"
#include "Person.h"
using namespace std;

Family::Family(string name, int size) {
	p = new Person[size];
	this->name = name;
	this->size = size;
}

Family::~Family() {
	delete [] p;
}

void Family::setName(int idx, string name) {
	p[idx].setName(name);
}

void Family::show() {
	cout << "The List of " << name << " Family (" << size << ')' << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << '\t';
	}
}