#include "IntStack.h"

bool IntStack::push(int n) {
	if (idx + 1 >= n_max) return false;
	arr[++idx] = n;
	return true;
}

bool IntStack::pop(int& n) {
	if (idx < 0) return false;
	n = arr[idx--];
	return true;
}