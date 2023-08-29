#include <iostream>
#include "Account.h"
using namespace std;

int main() {
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "'s left money is " << a.inquiry() << endl;

	int money = a.withdraw(20000);
	cout << a.getOwner() << "'s left money is " << a.inquiry() << endl;
}