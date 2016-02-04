#ifndef polygon_h
#define polygon_h

#include <vector>
#include "point.h"

class polygon: public std::vector<point>{
	public:
	polygon geser(int deltax, int deltay);
	polygon perbesar(float scale);

	void push_back(int x, int y); 
	void push_back(const point& p){std::vector<point>::push_back(p);};

	private:
	
};

#endif
