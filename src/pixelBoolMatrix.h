#ifndef pixelboolmatrix_h
#define pixelboolmatrix_h

#include <vector>
#include "print.h"
#include "point.h"
#include "polygon.h"

class pixelBoolMatrix{
	public:
	int width,height;
	pixelBoolMatrix(int _width, int _height);

	void print(int x, int y);
	void print(point p);

	void set(int x, int y, bool menyala);
	void set(point p, bool menyala);

	bool get(int x, int y);
	bool get(point p);

	int getWidth();
	int getHeight();

	void setLine(int x1, int y1, int x2, int y2, bool menyala);
	void setLine(point p1, point p2, bool menyala);

	void setWireframe(polygon p, bool menyala);
	void setSolid(polygon p, bool menyala);

	private:
	std::vector< std::vector <bool> > tab;
};

#endif
