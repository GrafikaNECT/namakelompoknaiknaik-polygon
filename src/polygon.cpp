#include "polygon.h"

void polygon::push_back(int x, int y){
	point p(x,y);
	push_back(p);
}


polygon polygon::hasilGeser(int deltax, int deltay){
	polygon retval = *this;
	for (int i=0;i<std::vector<point>::size();i++){
		retval[i].geser(deltax,deltay);
	}
	return retval;
}
polygon polygon::hasilPerbesar(float scale){
	polygon retval = *this;
	for (int i=0;i<std::vector<point>::size();i++){
		point& p = retval[i];
		p.setX(p.getX()*scale);
		p.setY(p.getY()*scale);
	}
	return retval;
}
