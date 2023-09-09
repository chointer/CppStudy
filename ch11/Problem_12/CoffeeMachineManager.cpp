#include "CoffeeMachineManager.h"

CoffeeMachineManager::CoffeeMachineManager() {
	igrs.insert(make_pair("Coffee", full));
	igrs.insert(make_pair("Suger", full));
	igrs.insert(make_pair("Cream", full));
	igrs.insert(make_pair("Water", full));
	igrs.insert(make_pair("Cup", full));

	vector<string> regular = { "Coffee", "Suger", "Cream", "Water", "Cup" };
	cofs.insert(make_pair("Regular", regular));
	vector<string> suger = { "Coffee", "Suger", "Water", "Cup" };
	cofs.insert(make_pair("Suger", suger));
	vector<string> black = { "Coffee", "Water", "Cup" };
	cofs.insert(make_pair("Black", black));
}

void CoffeeMachineManager::run() {
	cout << "----- Luxury Coffee Machine -----" << endl;
	int menu;
	while (true) {
		cout << *this << "\n[1] Regular Coffee, [2] Suger Coffee, [3] Black Coffee, [4] Fill, [5] EXIT >> ";
		cin >> menu;
		switch (menu)
		{
		case CO_REGULAR:
			get_coffee("Regular"); continue;
		case CO_SUGER:
			get_coffee("Suger"); continue;
		case CO_BLACK:
			get_coffee("Black"); continue;
		case FILL:
			fill();  continue;
		case EXIT:
			cout << "Thank You for Using !" << endl;
			return;
		default:
			cout << "Error" << endl;
		}
	}
}

bool CoffeeMachineManager::get_coffee(string coffee) {
	// check igrs
	vector<string>* p_coffee = &cofs[coffee];
	for (int i = 0; i < (int)p_coffee->size(); i++) {
		if (igrs[(*p_coffee)[i]] == 0) {
			cout << "  [[[ Fail. Please Fill " << (*p_coffee)[i] << " ]]]" << endl;
			return false;
		}
	}
	// use igrs
	for (int i = 0; i < (int)p_coffee->size(); i++) {
		igrs[(*p_coffee)[i]] -= 1;
	}
	cout << "  [[[ Get " << coffee << " Coffee ]]]" << endl;
	return true;
}

void CoffeeMachineManager::fill() {
	for (auto it = igrs.begin(); it != igrs.end(); it++) 
		it->second = full;
	cout << "  [[[ Fill All Storages ]]]" << endl;
}

ostream& operator<< (ostream& outs, CoffeeMachineManager& CMM) {
	for (auto it = CMM.igrs.begin(); it != CMM.igrs.end(); it++) {
		cout << setw(8) << left << it->first;
		for (int i = 0; i < it->second; i++) cout << '*';
		cout << endl;
	}
	return cout;
}