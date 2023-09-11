#include <iostream>
#include "FileCompare.h"
using namespace std;

int main() {
	const char file1[] = "C:\\Users\\yoal\\Documents\\명품CPP프로그래밍개정판_학습자용20200814\\a.jpg";
	const char file2[] = "C:\\Users\\yoal\\Documents\\명품CPP프로그래밍개정판_학습자용20200814\\b.jpg";
	const char file3[] = "C:\\Users\\yoal\\Documents\\명품CPP프로그래밍개정판_학습자용20200814\\c.jpg";

	FileCompare fc_ab(file1, file2);
	if (fc_ab.compare()) cout << "Same" << endl;
	else cout << "Differnt" << endl;

	FileCompare fc_ac(file1, file3);
	if (fc_ac.compare()) cout << "Same" << endl;
	else cout << "Differnt" << endl;
}