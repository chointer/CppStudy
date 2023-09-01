#include <string>
#include <iostream>
#include <locale>
#include "Histogram.h"
using namespace std;

Histogram& Histogram::operator << (string words) {
	text.append(words);
	return *this;
}

Histogram& Histogram::operator << (char c) {
	text.append(1, c);
	return *this;
}

void Histogram::operator! () {
	// Print Text
	cout << text << '\n' << endl;

	// Count Alphabets
	int n = 0;
	int text_size = text.size();
	for (int i = 0; i < text_size; i++) { if (isalpha(text[i])) n++; }
	cout << "Number of Alphabets: " << n << endl;

	// Histogram
	int idx;
	int counts[26];
	for (int i = 0; i < 26; i++) counts[i] = 0;

	char alphabet0 = 'a';
	for (int i = 0; i < text_size; i++) {
		idx = tolower(text[i]) - alphabet0;
		if (idx >= 0 and idx < 26) {
			counts[idx] += 1;
		}
	}

	// Print Histogram
	for (int i = 0; i < 26; i++) {
		cout << char(alphabet0 + i) << " (" << counts[i] << ") " << "\t: ";
		for (int j = 0; j < counts[i]; j++) {
			cout << '*';
		}
		cout << endl;
	}
	return;
}