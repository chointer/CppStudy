#pragma once
#include <string>
#include <iostream>
using namespace std;

class Seat
{
	bool reserved = false;
	string name;	
public:
	bool reserve();
	bool cancel();
	void show();
	bool get_status() { return reserved; }
	string get_name() { return name; }
};