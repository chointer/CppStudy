#pragma once
#include "AbstractStack.h"

class IntStack : public AbstractStack
{
	int* arr;
	int n_max, idx;
public:
	IntStack(int n = 100) :n_max(n), idx(-1) {
		arr = new int[n];
	}
	~IntStack() {
		delete[] arr;
	}
	bool push(int n);
	bool pop(int& n);
	int size() { return idx + 1; }
};

