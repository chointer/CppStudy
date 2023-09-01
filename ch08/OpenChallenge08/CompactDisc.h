#pragma once
#include "Product.h"

class CompactDisc : public Product
{
	string title, singer;
public:
	CompactDisc(int);
	void print_CD();
};

