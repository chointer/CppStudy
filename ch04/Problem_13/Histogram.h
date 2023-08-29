#pragma once
#include <string>
using namespace std;

class Histogram
{
	string words;
public:
	Histogram() {};
	Histogram(string words);
	void put(string words);
	void putc(char ch);
	void print();
};