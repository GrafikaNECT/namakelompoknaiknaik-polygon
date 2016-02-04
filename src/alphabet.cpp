#include "letter.h"
#include <string>

alphabet::alphabet() {
	initAlphabet();
}

alphabet::initAlphabet() {
	//baca alphabet.txt dan isi array alphabet
}

letter alphabet::getLetter(char c) {
	return alphabet[charIndex(c)];
}

int alphabet::charIndex(char c) {
	return "abcdefghijklmnopqrstuvwxyz".find(c);
}