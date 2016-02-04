#include "letter.h"
#include "polygon.h"
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
	ifstream afile;
	vector<letter> letterList;
	letter workingLetter;

	// Working variables for letter
	char workingLetterName;
	vector<polygon> workingBidang;
	vector<polygon> workingLubang;
	int workingX, workingY;

	char validCharList[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '(', ')', ',' }
	
	afile.open("alphabet.txt", ifstream::in);
	char ch = afile.get();

	if (afile.good()) {
		while (!afile.eof()) {
			// First: Get The name of the letter
				afile.get(ch);
				workingLetterName = ch;
				cout << "workingLetterName: " << ch << endl;
				afile.get(ch); // Get newline
			// Second: Entry for Bidang
				afile.get(ch); // Surely it will be '[' character
				afile.get(ch);
				while (ch != ']') {
					if (ch == "(") {
						// Start getting points
						workingX = 0;

						afile.get(ch);
						while (ch != ',') {
							workingX = (workingX * 10) + (ch - '0');
						}

						// ',' detected. X finished.
						workingY = 0;

						afile.get(ch); // Surely the first digit of Y
						while(ch != ')') {
							workingY = (workingY * 10) + (ch - '0');
						}

						// End of point (X,Y)
						// Save to Vector of Point HERE

						afile.get(ch); // It can be ']' or ','
					}
					else { // Surely it is comma
						// ignore
						afile.get(ch);
					}
				}
		}
		afile.close();
	}
	else {
		cout << "Unable to open file." << endl;
	}
	return 0;
}