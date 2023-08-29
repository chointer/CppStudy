#include <cstring>
#include "Book.h"
using namespace std;

//char* title;
//int price;

Book::Book(const char* title, int price) {
	this->price = price;
	this->title = new char[strlen(title) + 1];
	strcpy_s(this->title, strlen(title) + 1, title);
}

Book::Book(Book& b) {
	price = b.price;
	title = new char[strlen(b.title) + 1];
	strcpy_s(title, strlen(b.title) + 1, b.title);
}

Book::~Book() {
	delete title;
}

void Book::set(const char* title, int price) {
	this->price = price;
	delete this->title;
	this->title = new char[strlen(title) + 1];
	strcpy_s(this->title, strlen(title) + 1, title);	
}
