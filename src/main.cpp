#include "alphabet.h"
#include "print.h"
#include <fstream>
#include <cstdlib>
#include <string>
#include <unistd.h>

void teksnaiknaik(std::string txt, alphabet& mainalphabet){
	for (int y=getYRes()-100;y>-200;y-=10){
		drawCanvas(0,0,0,255);
		mainalphabet.drawTextCentered(txt,y,14,
			(255+y)%256,
			(100+y)%256,
			(0+y)%256,
			255);
		printToScreen();
		usleep(100);
	}
}

int main(){
	system("setterm -cursor off");
	ifstream alphabetfile;
	alphabetfile.open("alphabet-2.txt");
	alphabet mainalphabet(alphabetfile);
	alphabetfile.close();

	ifstream namesfile;
	namesfile.open("names.txt");

	int n;
	namesfile>>n;

	initializePrinter();

	for (int i=0;i<n;i++){
		std::string txt;
		std::getline(namesfile,txt);
		teksnaiknaik(txt,mainalphabet);			
	}

	finishPrinter();

	system("setterm -cursor on");
}
