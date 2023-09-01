#include "SortedArray.h"
#include <iostream>
#include <algorithm>
using namespace std;

void SortedArray::sort() {
	std::sort(p, p + size);
	return;
}

SortedArray::SortedArray(SortedArray& src) {
	size = src.size;
	p = new int[size];
	for (int i = 0; i < size; i++) {
		p[i] = src.p[i];
	}
	sort();
}

SortedArray SortedArray::operator + (SortedArray& op2) {
	int* tmp = new int[size + op2.size];
	for (int i = 0; i < size; i++) {
		tmp[i] = p[i];
	}
	for (int i = 0; i < op2.size; i++) {
		tmp[i + size] = op2.p[i];
	}
	
	SortedArray result(tmp, size + op2.size);
	delete [] tmp;

	return result;
	
}

SortedArray& SortedArray::operator = (const SortedArray& op2) {
	size = op2.size;
	delete [] p;
	p = new int[size];
	for (int i = 0; i < size; i++) {
		p[i] = op2.p[i];
	}
	return *this;
}

void SortedArray::show() {
	cout << "Print SortedArray\t";
	for (int i = 0; i < size; i++) {
		cout << this->p[i] << ' ';
	}
	cout << endl;
}

