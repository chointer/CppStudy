#include <vector>
#include "WordGame.h"
#include "Word.h"
using namespace std;

int main() {
	vector<Word> v;
	string eng[] = { "baby", "human" , "society" , "picture" , 
					"drawing" , "love" , "emotion" , "doll" , 
					"animal", "bear", "lover", "deal" };
	string kor[] = { "아기", "인간" , "사회" , "사진" ,
					"그림" , "사랑" , "감정" , "인형" ,
					"동물" , "곰", "애인", "거래" };

	for (int i = 0; i < sizeof(eng) / sizeof(*eng); i++) {
		v.push_back(Word(eng[i], kor[i]));
	}

	WordGame g(v);
	g.start();

}