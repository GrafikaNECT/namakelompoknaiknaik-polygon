#include "polygon.h"
#include "pixelBoolMatrix.h"
#include <vector>

using namespace std;

letter::letter(vector<polygon> _bidang, vector<polygon> _lubang, int _size) {
	bidang = _bidang;
	lubang = _lubang;
	size = _size;
}

void letter::draw() {
	for (vector<polygon>::iterator i=bidang.begin(); i!=bidang.end();i++) {
		lettermatrix.setSolid(*i,true);
	}
	
	for (vector<polygon>::iterator i=lubang.begin(); i!=lubang.end();i++) {
		lettermatrix.setSolid(*i,false);
	}
}