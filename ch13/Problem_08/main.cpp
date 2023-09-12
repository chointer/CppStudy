#include <iostream>
using namespace std;

int* copy(int* src, int size) {
	int* p = NULL;
	if (size < 0) throw "too small";
	else if (size > 100) throw "too big";

	p = new int[size];
	if (p == NULL) throw "memory short";
	else if (src == NULL) { 
		delete[] p;
		throw "NULL source";
	}
	else {
		for (int n = 0; n < size; n++) p[n] = src[n];
		return p;
	}

}


int main() {
	int x[] = { 1, 2, 3 };
	try {
		int* p = copy(x, 3);
		for (int i = 0; i < 3; i++) cout << p[i] << ' ';
		cout << endl;
		delete[] p;
	}
	catch (const char* msg) {
		cout << msg << endl;
	}
}