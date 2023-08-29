#pragma once
#include <string>
using namespace std;

class Person
{
	string name;
public:
	Person() {}
	Person(string name) { this->name = name; }
	void setName(string name) { this->name = name; }
	string getName() { return name; }
};

