#include <string>
#include "Book.h"
using namespace std;

//char* title;
//int price;

Book::Book(const char* title, int price) {
	this->price = price;
	this->title = title;
}

Book::~Book() {}

void Book::set(const char* title, int price) {
	this->price = price;
	this->title = title;
}
