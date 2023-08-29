#pragma once
#include <string>
#include "UpAndDownGame.h"
using namespace std;

class Person
{
	string name;
public:
	Person(const char n[]) : name(n) {}
	bool guess();
};

