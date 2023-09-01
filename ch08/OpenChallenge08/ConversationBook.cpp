#include "ConversationBook.h"

ConversationBook::ConversationBook(int next_id) : Book(next_id) {
	p_type = 3;
	cout << "language>> ";
	cin >> language;
}

void ConversationBook::print_CB() {
	print_book();
	cout << "language\t: " << language << endl;
}