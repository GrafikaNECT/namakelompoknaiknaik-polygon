#ifndef alphabet_h
#define alphabet_h

#include "letter.h"
#include <map>

#include <fstream>

class alphabet {
	public:
	alphabet();
	alphabet(std::ifstream& file);
	void initAlphabet();
	letter getLetter(char c);

	protected:
	std::map<char, letter> letters;
};

#endif
