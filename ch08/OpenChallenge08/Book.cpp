#include "Book.h"

Book::Book(int next_id) : Product(next_id) {
	p_type = 1;
	cout << "title>> ";
	cin >> title;
	cout << "writer>> ";
	cin >> writer;
	cout << "ISBN>> ";
	cin >> ISBN;
}
void Book::print_book() {
	print_base();
	cout << "book title\t: " << title << endl;
	cout << "writer\t\t: " << writer << endl;
	cout << "ISBN\t\t: " << ISBN << endl;
}