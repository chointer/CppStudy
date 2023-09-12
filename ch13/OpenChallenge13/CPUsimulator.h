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
	void fetch() throw(HardwareException);			// 명령어 가져오기
	void decode() throw(HardwareException);			// 명령어 해독
	bool execute() throw(HardwareException);			// 명령어 실행
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

