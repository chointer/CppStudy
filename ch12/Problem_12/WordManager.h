#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

class WordManager
{
	vector<string> storage;
	int diff(string&, string&);
public:
	WordManager(const char*);
	void print_diffs(string&);
	void run();
};