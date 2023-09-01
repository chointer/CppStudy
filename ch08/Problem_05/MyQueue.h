#pragma once
#include "BaseArray.h"
class MyQueue : public BaseArray
{
	int front=0, end=0, l=0;
public:
	MyQueue(int);
	void enqueue(int);
	int dequeue();
	int capacity() { return getCapacity(); }
	int length() { return l; }
};