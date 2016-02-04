#ifndef letter_h
#define letter_h

#include "polygon.h"
#include "pixelBoolMatrix.h"
#include <vector>

#define WIDTH 8
#define HEIGHT 12

using namespace std;

class letter {
	public:
	letter(vector<polygon> bidang, vector<polygon> lubang, int size);
	~letter();
	void draw();

	protected:
	vector<polygon> bidang;
	vector<polygon> lubang;
	int size;
	pixelBoolMatrix lettermatrix(WIDTH,HEIGHT);
}