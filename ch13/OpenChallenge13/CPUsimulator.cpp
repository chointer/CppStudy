#include "CPUsimulator.h"

void CPUsimulator::fetch() throw(HardwareException) {
	cout << "\n>> ";
	getline(cin, instruction);
	if (instruction.size() == 0) throw HardwareException("fetch", "Empty command line");
}
void CPUsimulator::decode() throw(HardwareException) {
	instruction.append(" ");
	vector<string> words;
	int st = 0;

	for (unsigned int i = 0; i < instruction.size(); i++) {
		if (instruction[i] == ' ') {
			if (i != st) words.push_back(instruction.substr(st, i - st));
			st = i + 1;
		}
	}

	if (words[0] == "EXIT") {
		cmd = words[0];
	}
	else if (commands.find(words[0]) != commands.end()) {
		cmd = words[0];
		if (words.size() != 3) {
			string msg("Operand Exception;");
			msg.append(cmd);
			msg.append(" takes 2 operands, but there are ");
			msg.append(to_string(words.size() - 1));
			throw HardwareException("decode", msg);
		}
		try {
			op1 = stringToInt(words[1]);
			op2 = stringToInt(words[2]);
		}
		catch (string x) {
			string msg("Invalid Openrand Type; ");
			msg.append(x);
			throw HardwareException("decode", msg);
		}
	}
	else throw HardwareException("decode", "Invalid Command Exception");
}

bool CPUsimulator::execute() throw(HardwareException) {
	string output = instruction;
	output.append(" :  ");
	if (cmd == "EXIT") return false;
	else if (cmd == "ADD") output.append(to_string(op1 + op2));
	else if (cmd == "SUB") output.append(to_string(op1 - op2));
	else if (cmd == "MUL") output.append(to_string(op1 * op2));
	else if (cmd == "DIV") {
		if (op2 == 0) throw HardwareException("execute", "Divied by 0 Exception");
		output.append(to_string(op1 / op2));
	}

	cout << output << endl;
	return true;
}

int CPUsimulator::stringToInt(string x) throw(string) {
	int output = 0;
	for (unsigned int i = 0; i < x.size(); i++) {
		char chx = (char)x[i];
		if (chx < '0' || chx > '9') throw x;
		output = output * 10 + chx - '0';
	}
	return output;
}

void CPUsimulator::run()
 {
	try {
		do {
			fetch();
			decode();
		} while (execute());
	}
	catch (HardwareException he) {
		cout << he.getStep() << " Step, " << he.setMsg() << endl;
	}
	catch ( ... ) {
		cout << "Unexpected Throw-Catch Error" << endl;
	}
}