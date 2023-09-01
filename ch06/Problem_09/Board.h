#pragma once
#include <string>
using namespace std;

class Board
{
	static string* pointers[100];
	static int next_index;
public:
	static void add(const char text[]);
	static void print();
	~Board();
};