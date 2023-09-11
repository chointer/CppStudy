#include "FileCompare.h"

FileCompare::FileCompare(const char* fpath1, const char* fpath2) {

	fin1.open(fpath1, ios::in | ios::binary);
	if (!fin1.is_open()) {
		cout << "Fail Opening File 1" << endl;
		isopen = false;
		return;
	}

	fin2.open(fpath2, ios::in | ios::binary);
	if (!fin2.is_open()) {
		cout << "Fail Opening File 2" << endl;
		isopen = false;
		return;
	}
	isopen = true;
	return;
}

bool FileCompare::compare() {
	if (!isopen) {
		cout << "Compare Error: File Oepning Failed" << endl;
		return false;
	}

	int ch1, ch2;
	while (true) {
		ch1 = fin1.get();
		ch2 = fin2.get();

		if ((ch1 == EOF) | (ch2 == EOF)) break;
		if (ch1 != ch2) return false;
	}

	if (ch1 ^ ch2) return false;
	else return true;
}