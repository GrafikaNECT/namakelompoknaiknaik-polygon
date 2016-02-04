#include "polygon.h"
#include "pixelBoolMatrix.h"
#include <vector>

using namespace std;

letter::letter(vector<polygon> _bidang, vector<polygon> _lubang, int _width, int _height) {
	bidang = _bidang;
	lubang = _lubang;
	width = _width;
	height = _height;
}

/*
void letter::draw() {
	for (vector<polygon>::iterator i=bidang.begin(); i!=bidang.end();i++) {
		lettermatrix.setSolid(*i,true);
	}
	for (vector<polygon>::iterator i=lubang.begin(); i!=lubang.end();i++) {
		lettermatrix.setSolid(*i,false);
	}
}
*/


pixelBoolMatrix toPixelBoolMatrix(float resize){
	int matwidth = width * resize;
	int matheight = height * resize;

	pixelBoolMatrix lettermatrix(matwidth,matheight);
	for (vector<polygon>::iterator i=bidang.begin(); i!=bidang.end();i++) {
		lettermatrix.setSolid(*i,true);
	}
	for (vector<polygon>::iterator i=lubang.begin(); i!=lubang.end();i++) {
		lettermatrix.setSolid(*i,false);
	}
	return lettermatrix;
}
