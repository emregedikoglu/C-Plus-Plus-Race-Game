#include "SimpleDraw.h"

class Circle {
	private:
		int x,y,r;
	public:
		Circle();
		Circle(int x, int y, int r);
		int getX();
		int getY();
		void setXY(int x, int y);
		void setR(int r);
		void draw();
		void clear();
		void move(int px, int py);		
};