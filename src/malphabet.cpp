#include "alphabet.h"
#include "print.h"
#include "pixelBoolMatrix.h"
#include <fstream>
#include <unistd.h>
#include <iostream>

void testPrintChar(alphabet mainalphabet, char c){

		std::cout<<"printing: "<<c<<std::endl;
		letter l = mainalphabet.getLetter(c);
		pixelBoolMatrix pbm = l.toPixelBoolMatrix(20);
		drawCanvas(0,0,0,255);
		pbm.draw(20,20,255,255,255,255);		
		printToScreen();
}

int main(){
	ifstream alphabetfile;
	alphabetfile.open("alphabet-2.txt");
	alphabet mainalphabet(alphabetfile);
	alphabetfile.close();

	initializePrinter();
	for (char c = 'A';c<'X';c++){
		testPrintChar(mainalphabet, c);
		usleep(300000);
	}
	testPrintChar(mainalphabet, 'Y');
		usleep(300000);
		testPrintChar(mainalphabet, 'Z');
		usleep(300000);
		testPrintChar(mainalphabet, '!');
		usleep(300000);
		testPrintChar(mainalphabet, '.');
		usleep(300000);
	finishPrinter();
}
