#include "Console.h"
bool Console::menu(AirlineBook& book) {
	int get_int;
	cout << "\n[1] Book, [2] Cancel, [3] Show, [4] End >> ";
	cin >> get_int;

	if (get_int == 1) book.reserve();
	else if (get_int == 2) book.cancel();
	else if (get_int == 3) book.show();
	else if (get_int == 4) return false;
	
	return true;
}