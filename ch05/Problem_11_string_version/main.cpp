#include "Book.h"

int main() {
	Book cpp("Luxury C++", 10000);
	cpp.show();

	Book java = cpp;
	java.show();

	java.set("Luxury JAVA", 12000);
	cpp.show();
	java.show();
}