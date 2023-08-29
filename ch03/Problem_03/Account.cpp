#include "Account.h"

// char*으로 const char*를 받을 수 없게 바뀌었다고 한다.

Account::Account(const char* n, int i, int b) : name(n), id(i), balance(b) {}

const char* Account::getOwner() {
	return name;
}

void Account::deposit(int money) {
	balance += money;
}

int Account::withdraw(int money) {
	if (balance >= money) {
		balance -= money;
		return money;
	}
	else {
		balance = 0;
		return money - balance;
	}
}

int Account::inquiry() {
	return balance;
}
