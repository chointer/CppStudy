#include <vector>
#include "WordGame.h"
#include "Word.h"
using namespace std;

int main() {
	vector<Word> v;
	string eng[] = { "baby", "human" , "society" , "picture" , 
					"drawing" , "love" , "emotion" , "doll" , 
					"animal", "bear", "lover", "deal" };
	string kor[] = { "�Ʊ�", "�ΰ�" , "��ȸ" , "����" ,
					"�׸�" , "���" , "����" , "����" ,
					"����" , "��", "����", "�ŷ�" };

	for (int i = 0; i < sizeof(eng) / sizeof(*eng); i++) {
		v.push_back(Word(eng[i], kor[i]));
	}

	WordGame g(v);
	g.start();

}