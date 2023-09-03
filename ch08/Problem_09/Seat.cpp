#include "Seat.h"

bool Seat::reserve() {
	if (reserved == true) { 
		cout << "Alread Rserved Seat" << endl;
		return true; 
	}
	else {
		cout << "Enter Name\t>> ";
		cin >> name;
		reserved = true;
		return false;
	}
}

bool Seat::cancel() {
	if (reserved == false) {
		cout << "Not Rserved Seat" << endl;
		return true;
	}
	else {
		string name_check;
		cout << "Enter Name\t>> ";
		cin >> name_check;
		if (name == name_check) {
			reserved = false;
			return false;
		}
		else {
			cout << "Fail: Unmatched Name" << endl;
			return true;
		}
	}
}

void Seat::show() {
	if (reserved) {
		cout << name << "\t";
	}
	else cout << "---\t";
}