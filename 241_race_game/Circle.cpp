#include "Circle.h"

Circle :: Circle() {
	x = 50;
	y = 200;
	r = 25;
}
Circle :: Circle(int x, int y, int r) {
	Circle :: x = x;
	Circle :: y = y;
	Circle :: r = r;	
}
void Circle :: setXY(int x, int y) {
	Circle :: x = x;
	Circle :: y = y;
}
void Circle :: setR(int r) {
	Circle :: r = r;	
}
void Circle :: move(int px, int py) {
	clear();
	setXY(px,py);
	draw();
}
void Circle :: draw() {
	usePen(PS_SOLID, 1, RGB(0,0,0));
	useBrush(2, RGB(0,0,0));
	drawCircle(x, y, r);
}
void Circle :: clear() {
	usePen(PS_SOLID, 1, RGB(255,255,255));
	useBrush(2, RGB(255,255,255));
	drawCircle(x, y, r);
}

int Circle :: getX() {
	return x;
}
int Circle :: getY() {
	return y;
}

