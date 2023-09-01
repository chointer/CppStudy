#include "Product.h"

Product::Product(int next_id) {
	id = next_id;
	cout << "Description>> ";
	cin >> description;
	cout << "Producer>> ";
	cin >> producer;
	cout << "Price>> ";
	cin >> price;
}

void Product::print_base() {
	cout << "--- Product ID\t: " << id << endl;
	cout << "Description\t: " << description << endl;
	cout << "Producer\t: " << producer << endl;
	cout << "Price\t\t: " << price << endl;
}