#ifndef alphabet_h
#define alphabet_h

#include "letter.h"
#include <vector>

class alphabet {
	public:
	alphabet();
	~alphabet();
	void initAlphabet();
	letter getLetter(char c);

	protected:
	vector<letter> alphabet;
	string alphabetstring;
	int charIndex(char c);
}