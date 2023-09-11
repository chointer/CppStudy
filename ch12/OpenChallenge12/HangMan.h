#pragma once
#include <vector>
#include <set>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

class HangMan
{
	vector<long> indices;
	ifstream* pfin;
	int n;
	const int difficulty = 2;
	const int max_life = 5;
	void get_answer_set(string&, set<int>&);
	bool present_question(string&, set<int>&);
public:
	HangMan(string);
	~HangMan();
	void run();
	void start();
	
};
