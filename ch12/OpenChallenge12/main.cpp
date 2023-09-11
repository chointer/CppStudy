/*
공간 복잡도를 줄이기 위해, 모든 words를 저장하지 않고 각 words의 indices를 저장해서 사용한다.
시간 복잡도를 줄이기 위해, n 번째 word를 찾기 위해 n개의 word를 읽지 않고 index로 접근한다.
*/
#include <Windows.h>
#include <direct.h>
#include "HangMan.h"
using namespace std;

int main() {
	const string filepath("C:\\Users\\yoal\\Documents\\명품CPP프로그래밍개정판_학습자용20200814\\words.txt");
	HangMan game(filepath);
	game.run();
}