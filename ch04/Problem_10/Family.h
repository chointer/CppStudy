#pragma once
#include <string>
#include "Person.h"
using namespace std;

class Family
{
	Person* p;
	string name;
	int size;
public:
	Family(string name, int size);
	~Family();
	void setName(int idx, string name);
	void show();
};

