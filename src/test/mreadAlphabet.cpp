#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

#define LF 10

int main() {
	/* ifstream afile;
	
	afile.open("alphabet.txt", ifstream::in);
	char ch = afile.get();

	if (afile.good()) {
		while (!afile.eof()) {
			while(ch!=LF) {
				while(ch!=LF) {

				}
			}
		}
		afile.close();
	}
	else {
		cout << "Unable to open file." << endl;
	} */
	string line;
   	stringstream ss;
   	string identifier = "";
   	ifstream in;
   	in.open ("alphabet.txt");
   	bool isFlag = false;
	while(getline(in, line)) { //Character
		ss << line;
		ss >> identifier;

		while(identifier != "Bidang" && identifier != "Lubang" && !isFlag && identifier != "Selesai") {
			getline(in, line);
			ss << line;
			ss >> identifier;
		}
		// = Bidang atau = Lubang
		if (identifier=="Bidang")
			cout << "BIDANG:" << endl;
		else if (identifier=="Lubang")
			cout << "LUBANG:" << endl;
		else if (identifier=="Selesai")
			break;

		do {
			getline(in,line);
			ss << line;
			ss >> identifier;
			for (int i=0; i<line.length(); i++) {
			    if (line[i] >= '0' && line[i] <= '9') { // find x
			    	cout << "x: " << line[i];
			    	++i;
			    	while (!(line[i] >= '0' && line[i] <= '9')) ++i; // find y
			        cout << " y: " << line[i] << endl;
			    }
			}
			cout << line << endl;
		} while (identifier != "Bidang" && identifier != "Lubang" && line.length()>3);
		isFlag = true;
	}
	return 0;
}