#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

#define LF 10

int main() {
	string line;
   	stringstream ss;
   	string identifier = "";
   	ifstream in;
   	try {
   		in.open ("alphabet2.txt", ifstream::in);
	   	bool isFlag = false;
	   	cout << "WAA" << endl;
	   	ss << in.rdbuf();
	   	string contents(ss.str());
	   	in.close();
	   	ss >> identifier;
		while(identifier != "Selesai") { //Character
			while(identifier != "Bidang" && identifier != "Lubang" && !isFlag && identifier != "Selesai") {
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
				ss >> identifier;
				for (int i=0; i<identifier.length(); i++) {
				    if (identifier[i] >= '0' && identifier[i] <= '9') { // find x
				    	cout << "x: " << identifier[i];
				    	++i;
				    	while (!(identifier[i] >= '0' && identifier[i] <= '9')) ++i; // find y
				        cout << " y: " << identifier[i] << endl;
				    }
				}
				cout << identifier << endl;
			} while (identifier != "Bidang" && identifier != "Lubang" && identifier.length()>3 && identifier!= "Selesai");
			isFlag = true;
		}
   	} catch (std::ios_base::failure& e) {
		std::cerr << e.what() << '\n';
	}
	return 0;
}