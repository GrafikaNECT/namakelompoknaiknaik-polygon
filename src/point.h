#ifndef point_h
#define point_h

class point{
	private:
	int x;
	int y;

	public:
	point(int _x, int _y):x(_x),y(_y){};
	int getX(){return x;};
	int getY(){return y;};

	void setX(int _x){x=_x;};
	void setY(int _y){y=_y;};
};

#endif
