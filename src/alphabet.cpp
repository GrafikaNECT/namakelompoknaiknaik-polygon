#include "alphabet.h"
#include "letter.h"
#include <string>
#include <vector>
#include <ctype.h>

alphabet::alphabet() {
	initAlphabet();
}
#include <iostream>
alphabet::alphabet(std::ifstream& file){
	int width,height;
	file>>width;
	file>>height;
	
	int n;
	file>>n;
	for (int i=0;i<n;i++){
		char c;
		file>>c;
		std::cout<<"reading alphabet "<<c<<std::endl;

		int numBidang;
		file>>numBidang;

		vector<polygon> bidang(numBidang);
		for (int j=0;j<numBidang;j++){
			int numPoint;
			file>>numPoint;
			for (int k=0;k<numPoint;k++){
				int x,y;
				file>>x;
				file>>y;

				bidang[j].push_back(x,y);
			}
		}
		

		int numLubang;
		file >> numLubang;

		vector<polygon> lubang(numLubang);
		for (int j=0;j<numLubang;j++){
			int numPoint;
			file>>numPoint;
			for (int k=0;k<numPoint;k++){
				int x,y;
				file>>x;
				file>>y;

				lubang[j].push_back(x,y);
			}
		}
		
		letter l(bidang, lubang, width,height);
		letters[c]=l;

		pixelBoolMatrix pbm = l.toPixelBoolMatrix();
		for (int _y=0;_y<pbm.getHeight();_y++){
			for (int _x=0;_x<pbm.getWidth();_x++){
				std::cout<<pbm.get(_x,_y);
			}
			std::cout<<std::endl;
		}
	}
}

void alphabet::initAlphabet() {
	//baca alphabet.txt dan isi array alphabet
}

letter alphabet::getLetter(char c) {
	return letters[c];
}
