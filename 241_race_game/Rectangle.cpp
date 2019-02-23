#include "Rectangle.h"

Rect :: Rect() {
	w = 50;
	h = 150;
	x = 625;
	y = 25;
	recalculateCoords();
}

void Rect :: recalculateCoords() {
	x1 = x - w/2;
	x2 = x + w/2;
	y1 = y - h/2;
	y2 = y + h/2;
}

void Rect :: setXY(int x, int y) {
	Rect::x = x;
	Rect::y = y;
	recalculateCoords();
}

int Rect::getX(){
	return x;
}

int Rect::getY(){
	return y;
}

void Rect :: setWH(int w, int h) {
	Rect::w = w;
	Rect::h = h;
	recalculateCoords();
}

void Rect :: draw() {
	usePen(PS_SOLID, 1, RGB(0,0,0));
	useBrush(4, RGB(255,0,0));
	drawRectangle(x1,y1,x2,y2);
}

void Rect :: clear() {
	usePen(PS_SOLID, 1, RGB(255,255,255));
	useBrush(4, RGB(255,255,255));
	drawRectangle(x1,y1,x2,y2);
}

void Rect :: move(int px, int py) {
	clear();
	x = px;
	y = py;
	recalculateCoords();
	draw();
}