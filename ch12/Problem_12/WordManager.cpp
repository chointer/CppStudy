#include "WordManager.h"

WordManager::WordManager(const char* filepath) {
	cout << "Word File Reading ... ";
	ifstream fin(filepath);
	if (!fin) {
		cout << "\n!!! ERROR:: Failed in File Reading !!!" << endl;
		return;
	}

	string line;
	while (getline(fin, line)) {
		storage.push_back(line);
	}

	cout << "Done" << endl;
	cout << "eof " << fin.eof() << "   fail " << fin.fail() << "   bad " << fin.bad() << '\n' << endl;

	fin.close();
}

int WordManager::diff(string& word, string& word_to_cmp) {
	int n_different = 0, word_size = word.size(), word_cmp_size = word_to_cmp.size();

	for (int i = 0; i < min(word_size, word_cmp_size); i++) {
		if (word[i] != word_to_cmp[i]) n_different++;
	}

	n_different += abs(word_size - word_cmp_size);

	return n_different;
}

void WordManager::print_diffs(string& word) {
	string word_to_cmp;

	if (find(storage.begin(), storage.end(), word) == storage.end()) {
		cout << "단어 없음" << endl;
		return;
	}

	for (int i = 0; i < (int)storage.size(); i++) {
		word_to_cmp = storage[i];
		if (diff(word, word_to_cmp) == 1)
			cout << word_to_cmp << endl;
	}

	cout << "--- END ---\n" << endl;
	
}

void WordManager::run() {
	while (true) {
		string word;
		cout << "Enter a word >> ";
		cin >> word;

		if (word == "exit") break;
		else print_diffs(word);
	}
	
}