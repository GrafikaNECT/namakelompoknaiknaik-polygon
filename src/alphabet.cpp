#include "letter.h"
#include <string>
#include <vector>
#include <ctype.h>

alphabet::alphabet() {
	alphabetstring = "";
	initAlphabet();
}

alphabet::initAlphabet() {
	//baca alphabet.txt dan isi array alphabet
}

letter alphabet::getLetter(char c) {
	if (isalpha(c)) {
		c = toupper(c);
	}
	return alphabet.at(charIndex(c));
}

int alphabet::charIndex(char c) {
	return alphabetstring.find(c);
}	