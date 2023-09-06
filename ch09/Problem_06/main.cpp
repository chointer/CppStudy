#include "IntStack.h"
#include <iostream>
using namespace std;

int main() {
	int input;
	IntStack stack;

	for (int i = 0; i < 10; i++) {
		cout << "[1] push, [2] pop, [3] size >> ";
		cin >> input;

		if (input == 1) {
			cout << "put number >> ";
			cin >> input;
			if (stack.push(input)) cout << "Success" << endl;
			else cout << "Fail" << endl;
		}
		else if (input == 2) {
			if (stack.pop(input)) cout << input << endl;
			else cout << "Fail" << endl;
		}
		else if (input == 3) {
			cout << stack.size() << endl;
		}
	}
	
}