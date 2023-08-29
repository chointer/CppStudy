#pragma once
class Account
{
	const char* name;
	int id;
	int balance;
public:
	Account(const char* n, int i, int b);
	const char* getOwner();
	void deposit(int money);
	int withdraw(int money);
	int inquiry();
};