#pragma once
#include <cmath>
#include "Exp.h"
using namespace std;

Exp::Exp() : Exp(1) {}

Exp::Exp(int a) : Exp(a, 1) {}

Exp::Exp(int a, int b) : base(a), exp(b) {
	value = int(pow(base, exp));
}

int Exp::getValue() {
	return value;
}

int Exp::getBase() {
	return base;
}

int Exp::getExp() {
	return exp;
}

bool Exp::equals(Exp b) {
	return value == b.getValue();
}