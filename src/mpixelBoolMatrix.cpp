#include "pixelBoolMatrix.h"
#include "polygon.h"
#include "print.h"

int main(){
	initializePrinter();

	polygon p;
	p.push_back(4,4);
	p.push_back(30,100);
	p.push_back(100,4);
	p.push_back(30,400);

	drawCanvas(0,0,0,255);
	pixelBoolMatrix mat(500,500);
	mat.setWireframe(p,true);
	mat.draw(10,10,255,255,255,255);

	pixelBoolMatrix mat2(100,100);
	mat.setAll(true);
	mat.draw(500,500,255,255,255,255);
	printToScreen();

	finishPrinter();
}
