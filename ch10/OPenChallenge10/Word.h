#pragma once
#include <string>
using namespace std;

class Word
{
	string key, val;
public:
	Word(string k, string v) : key(k), val(v) { }
	string get_key() { return key; }
	string get_val() { return val; }
};

