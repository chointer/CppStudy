#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class FileCompare {
	ifstream fin1, fin2;
	bool isopen;
public:
	FileCompare(const char* fpath1, const char* fpath2);
	bool compare();
	~FileCompare() {
		fin1.close();
		fin2.close();
	}
};