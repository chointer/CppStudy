/*
���� ���⵵�� ���̱� ����, ��� words�� �������� �ʰ� �� words�� indices�� �����ؼ� ����Ѵ�.
�ð� ���⵵�� ���̱� ����, n ��° word�� ã�� ���� n���� word�� ���� �ʰ� index�� �����Ѵ�.
*/
#include <Windows.h>
#include <direct.h>
#include "HangMan.h"
using namespace std;

int main() {
	const string filepath("C:\\Users\\yoal\\Documents\\��ǰCPP���α׷��ְ�����_�н��ڿ�20200814\\words.txt");
	HangMan game(filepath);
	game.run();
}