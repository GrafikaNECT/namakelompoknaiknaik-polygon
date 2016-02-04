#include "letter.h"
#include "print.h"
#include "pixelBoolMatrix.h"


#include <unistd.h>

#include <vector>

#include <iostream>

#include <stdlib.h>

int main(){
	system("setterm -cursor on");

	//coba bikin huruf terus print

	//bikin huruf A kebalik
	polygon p;
	p.push_back(0,0);
	p.push_back(4,12);
	p.push_back(8,0);
	p.push_back(7,0);
	p.push_back(6,3);
	p.push_back(2,3);
	p.push_back(1,0);

	std::vector<polygon> bidangs;
	bidangs.push_back(p);

	std::vector<polygon>lubangs;

	letter letterAKebalik(bidangs,lubangs,81,121);
	initializePrinter();
	pixelBoolMatrix pbm1 = letterAKebalik.toPixelBoolMatrix(1);
	for (int i=0;i<pbm1.getHeight();i++){
		for (int j=0;j<pbm1.getWidth();j++){
		//	std::cout<<pbm1.get(j,i);
		}
		//std::cout<<std::endl;
	}
	drawCanvas(0,0,0,255);
	pbm1.draw(10,10,255,255,255,255);
	printToScreen();
	sleep(1);



	for (int i=0;i<100;i++){
		pixelBoolMatrix pbm = letterAKebalik.toPixelBoolMatrix(1+(float)i/10);
		drawCanvas(0,0,0,255);
		pbm.draw(10,10,255,255,255,255);
		printToScreen();
		usleep(1000);

	}
	finishPrinter();
	system("setterm -cursor on");
	
}
