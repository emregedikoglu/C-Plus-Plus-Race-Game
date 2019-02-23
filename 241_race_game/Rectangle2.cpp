#include "Rectangle2.h"

Rect2 :: Rect2() {
	w = 1400;
	h = 20;
	x = 700;
	y = 300;
	recalculateCoords();
}

void Rect2 :: recalculateCoords() {
	x1 = x - w/2;
	x2 = x + w/2;
	y1 = y - h/2;
	y2 = y + h/2;
}

void Rect2 :: setXY(int x, int y) {
	Rect2::x = x;
	Rect2::y = y;
	recalculateCoords();
}

int Rect2::getX(){
	return x;
}

int Rect2::getY(){
	return y;
}

void Rect2 :: setWH(int w, int h) {
	Rect2::w = w;
	Rect2::h = h;
	recalculateCoords();
}

void Rect2 :: draw() {
	usePen(PS_SOLID, 1, RGB(0,0,0));
	useBrush(3, RGB(255,165,0));
	drawRectangle(x1,y1,x2,y2);
}

void Rect2 :: clear() {
	usePen(PS_SOLID, 1, RGB(255,255,255));
	useBrush(3, RGB(255,255,255));
	drawRectangle(x1,y1,x2,y2);
}

void Rect2 :: move(int px, int py) {
	clear();
	x = px;
	y = py;
	recalculateCoords();
	draw();
}