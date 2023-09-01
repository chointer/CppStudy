#pragma once
#include <string>
#include <iostream>
using namespace std;

class Product
{
protected:
	int id, price, p_type;
	string description, producer;
public:
	Product(int);
	void print_base();
	int get_type() { return p_type; }
};

