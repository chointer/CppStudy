#include "HangMan.h"

HangMan::HangMan(string path) {
	srand((unsigned)time(0));

	n = 0;
	cout << "Preparing Words ... ";
	pfin = new ifstream(path);
	if (!(*pfin)) { cout << "Error in File Reading" << endl; return; }

	string word;
	indices.push_back((long)0);	
	while (getline(*pfin, word)) {
		indices.push_back((long)(*pfin).tellg());
		n++;
	}
	indices.pop_back();
	(*pfin).clear();
	cout << "Done (" << n << " words)\n" << endl;
}

HangMan::~HangMan() {
	(*pfin).close();
	delete pfin;
	cout << "\nfile closed" << endl;
}

void HangMan::run() {
	cout << "----- ----- ----- ----- -----" << endl;
	cout << "      Start HangMan Game" << endl;
	cout << "----- ----- ----- ----- -----" << endl;

	bool conti = true;
	char yn;
	while (conti) {
		yn = 0;
		start();

		while ((yn != 'y') & (yn != 'n')) {
			cout << "New Game? [y/n] >> ";
			cin >> yn;
			if (yn == 'n') conti = false;
			else if (yn != 'y') cout << "Enter 'y' for YES or 'n' for NO." << endl;
		}
	}
}

void HangMan::start() {
	int life = max_life;
	int idx = rand() % n;
	string word;
	set<int> blinded_indices;

	pfin->seekg(indices[idx]);
	getline(*pfin, word);

	get_answer_set(word, blinded_indices);
	cin.clear();


	while ((!blinded_indices.empty()) & (life > 0)) {
		cout << '[' << life << "]   ";
		if (present_question(word, blinded_indices))
			blinded_indices.erase(blinded_indices.begin());
		else life--;
	}

	if (life == 0) cout << setw(10) << left << "Fail;";
	else cout << setw(10) << left << "Correct;";
	cout << word << endl;
}

void HangMan::get_answer_set(string& word, set<int>& indices) {
	int idx;

	for (int i = 0; i < difficulty; i++) {
		idx = rand() % word.size();
		if (indices.find(idx) != indices.end()) i--;
		else indices.insert(idx);
	}
}

bool HangMan::present_question(string& word, set<int>& indices) {
	char ans;

	for (int i = 0; i < (int)word.size(); i++) {
		if (indices.find(i) == indices.end()) cout << word[i];
		else cout << '-';
	}
	cout << " >> ";
	cin >> ans;

	if (ans == word[*indices.begin()]) return true;
	else return false;
}