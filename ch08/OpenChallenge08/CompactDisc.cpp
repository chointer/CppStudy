#include "CompactDisc.h"

CompactDisc::CompactDisc(int next_id) : Product(next_id) {
	p_type = 2;
	cout << "title>> ";
	cin >> title;
	cout << "singer>> ";
	cin >> singer;
}

void CompactDisc::print_CD() {
	print_base();
	cout << "album title\t: " << title << endl;
	cout << "singer\t\t: " << singer << endl;
}