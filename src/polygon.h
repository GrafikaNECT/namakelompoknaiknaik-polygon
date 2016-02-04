#ifndef polygon_h
#define polygon_h

#include <vector>
#include "point.h"
#include "pixelBoolMatrix.h"

class polygon: std::vector<point>{
	public:
	polygon geser(int deltax, int deltay);
	polygon perbesar(float scale); 

	private:
	
};

#endif
