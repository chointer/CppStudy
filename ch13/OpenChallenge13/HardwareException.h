#pragma once
#include <string>
#include <iostream>
using namespace std;

class HardwareException
{
	string step, msg;
public:
	HardwareException(string step = "", string msg = "") : step(step), msg(msg) { }
	string getStep() { return step; }
	string setMsg() { return msg; }
	void setMsg(string msg) { this->msg = msg; }
};

