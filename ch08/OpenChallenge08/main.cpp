#include "Book.h"
#include "CompactDisc.h"
#include "ConversationBook.h"
using namespace std;

int main() {
	cout << "***** Product Management Program *****" << endl;
	int input, next_id = 0;
	const int MAX = 100;
	Product *products[MAX];

	while (next_id < MAX) {
		cout << "Add a Product (1),  Check All Products (2),  End Program (3) ? ";
		cin >> input;
		cout << endl;
		
		if (input == 3) break;
		else if (input == 2) {
			for (int i = 0; i < next_id; i++) {
				int p_type = products[i]->get_type();
				if (p_type == 1) ((Book*)products[i])->print_book();
				else if (p_type == 2) ((CompactDisc*)products[i])->print_CD();
				else if (p_type == 3) ((ConversationBook*)products[i])->print_CB();
				cout << endl;
			}
		}
		else {
			cout << "Product Type  Book (1),  MusicCD (2),  ConversationBook (3) ? ";
			cin >> input;
			cout << endl;
			if (input == 1) products[next_id] = new Book(next_id);
			else if (input == 2) products[next_id] = new CompactDisc(next_id);
			else if (input == 3) products[next_id] = new ConversationBook(next_id);
			
			next_id++;
		}
	}

	if (next_id == MAX) cout << "Product List is Full" << endl;

	for (int i = 0; i < next_id; i++) {
		delete products[i];
	}

}