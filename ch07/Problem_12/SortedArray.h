#pragma once
class SortedArray
{
	int size;
	int* p;
	void sort();
public:
	SortedArray() : size(0), p(0) { }
	SortedArray(SortedArray& src);
	SortedArray(int p[], int size) : size(size) {
		this->p = new int[size];
		for (int i = 0; i < size; i++) {
			this->p[i] = p[i];
		}
		sort();
	}
	~SortedArray() { delete [] p; }
	SortedArray operator + (SortedArray& op2);
	SortedArray& operator = (const SortedArray& op2);
	void show();
};

