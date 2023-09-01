#include <iostream>
#include "MyQueue.h"
using namespace std;

MyQueue::MyQueue(int c): BaseArray(c) {}

void MyQueue::enqueue(int n) {
	if (l == getCapacity()) {
		cout << "Error; full" << endl;
		return;
	}

	put(end, n);
	end = (end + 1) % getCapacity();
	l++;
	
}

int MyQueue::dequeue() {
	if (l == 0) {
		cout << "Error; empty" << endl;
		return 0;
	}

	int tmp = get(front);
	front = (front + 1) % getCapacity();
	l--;

	return tmp;
}