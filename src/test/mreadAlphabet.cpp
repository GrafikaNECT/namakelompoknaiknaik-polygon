#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream afile;
	
	afile.open("alphabet.txt", ifstream::in);
	char ch = afile.get();

	if (afile.good()) {
		while (!afile.eof()) {
			cout << ch;
			afile.get(ch);
		}
		afile.close();
	}
	else {
		cout << "Unable to open file." << endl;
	}
	return 0;
}