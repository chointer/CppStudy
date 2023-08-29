#include <string>
#include <iostream>
#include <locale>
#include "Histogram.h"
using namespace std;

Histogram::Histogram(string words) {
	this->words = words;
}

void Histogram::put(string words) {
	this->words.append(words);
	return;
}

void Histogram::putc(char ch) {
	this->words.append(1, ch);
	return;
}

void Histogram::print() {
	cout << words << endl;
	int n = 0;
	for (int i = 0; i < words.size(); i++) { if (isalpha(words[i])) n++; }
	cout << "Number of Alphabets: " << n << endl;

	int idx;
	int counts[26];
	for (int i = 0; i < 26; i++) counts[i] = 0;
	
	char alphabet0 = 'a';
	for (int i = 0; i < words.size(); i++) {
		idx = tolower(words[i]) - alphabet0;
		if (idx >= 0 and idx < 26) {
			counts[idx] += 1;
		}
	}
	
	for (int i = 0; i < 26; i++) { 
		cout << char(alphabet0 + i) << " (" << counts[i] << ") " << "\t: ";
		for (int j = 0; j < counts[i]; j++) {
			cout << '*';
		}
		cout << endl;
	}
	return;
}