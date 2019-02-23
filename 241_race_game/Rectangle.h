#include "SimpleDraw.h"

class Rect {
	private:
		int x,y,w,h;
		int x1,y1,x2,y2;
		void recalculateCoords();
	public:
		Rect();
		void setXY(int x, int y);
		void setWH(int w, int h);
	    int getX();
		int getY();
		void draw();
		void clear();
		void move(int px, int py);
};