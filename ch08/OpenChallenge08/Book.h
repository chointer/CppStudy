#pragma once
#include "Product.h"

class Book : public Product
{
protected:
	string ISBN, writer, title;
public:
	Book(int);
	void print_book();
};

