#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <set>
#include "HardwareException.h"
using namespace std;

class CPUsimulator
{
	set<string> commands;
	string instruction;
	int op1, op2;
	string cmd;
	void fetch() throw(HardwareException);			// ��ɾ� ��������
	void decode() throw(HardwareException);			// ��ɾ� �ص�
	bool execute() throw(HardwareException);			// ��ɾ� ����
	int stringToInt(string x) throw(string);
public:
	CPUsimulator() {
		commands.insert(string("ADD"));
		commands.insert(string("SUB"));
		commands.insert(string("MUL"));
		commands.insert(string("DIV"));
	}
	void run();
};

