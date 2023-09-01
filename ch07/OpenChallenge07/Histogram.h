#pragma once
#include <string>
using namespace std;

class Histogram
{
	string text;
public:
	Histogram(string words) : text(words) { }
	Histogram& operator << (string words);
	Histogram& operator << (char c);
	void operator! ();
};

