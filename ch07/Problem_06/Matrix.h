#pragma once
#include <iostream>
using namespace std;

class Matrix
{
	int arr[4];
public:
	Matrix() { }
	Matrix(int a0, int a1, int a2, int a3) {
		*arr = a0;
		*(arr + 1) = a1;
		*(arr + 2) = a2;
		*(arr + 3) = a3;
	}
	
	Matrix operator+ (Matrix m) {
		Matrix tmp;
		for (int i = 0; i < 4; i++) {
			tmp.arr[i] = (*this).arr[i] + m.arr[i];
		}
		return tmp;
	}
	Matrix& operator+= (Matrix m) {
		for (int i = 0; i < 4; i++) {
			this->arr[i] += m.arr[i];
		}
		return *this;
	}

	bool operator==(Matrix m) {
		bool tf = true;
		for (int i = 0; i < 4; i++) {
			if (this->arr[i] != m.arr[i]) tf = false;
		}
		return tf;
	}
	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++) {
			cout << arr[i] << ' ';
		}
		cout << "}" << endl;
	}
};

