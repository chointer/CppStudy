#include <iostream>
#include "MyQueue.h"
using namespace std;

int main() {
	MyQueue mQ(100);
	int n;
	cout << "Enter 5 integers to insert into a queue>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n);
	}

	cout << "Capacity:" << mQ.capacity() << ", Size:" << mQ.length() << endl;
	cout << "Print deleting elements in order>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' ';
	}
	cout << endl << "Size:" << mQ.length() << endl;

}