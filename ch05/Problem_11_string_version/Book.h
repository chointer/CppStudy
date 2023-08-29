#pragma once
#include <iostream>
using namespace std;

class Book
{
	string title;
	int price;
public:
	Book(const char* title, int price);
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << "  " << price << " Won" << endl; }
};

