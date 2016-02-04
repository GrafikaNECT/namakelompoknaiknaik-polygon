#include "letter.h"
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


pixelBoolMatrix letter::toPixelBoolMatrix(float resize){
	int matwidth = width * resize;
	int matheight = height * resize;

	pixelBoolMatrix lettermatrix(matwidth,matheight);
	lettermatrix.setAll(false);
	for (vector<polygon>::iterator i=bidang.begin(); i!=bidang.end();i++) {
		polygon p = i->hasilPerbesar(resize);
		lettermatrix.setSolid(p,true);
	}
	for (vector<polygon>::iterator i=lubang.begin(); i!=lubang.end();i++) {
		polygon p = i->hasilPerbesar(resize);
		lettermatrix.setSolid(p,false);
	}
	return lettermatrix;
}
