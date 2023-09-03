/*
Hansung Air
3 plains - 8 seats each, Seoul - Busan
07, 12, 17 o'clock
*/
#include "AirlineBook.h"
#include "Console.h"

int main() {
	AirlineBook book;
	cout << "***** HanSung Air Reservation *****" << endl;
	while (Console::menu(book));
	cout << "\n***** Thank you for being our guest. *****" << endl;
}