#include <time.h>
#include "Rectangle.h"
#include "Rectangle2.h"
#include "Circle.h"
#include <stdlib.h>
#include <Windows.h>
void main()
{
	PlaySoundA("car_start.wav", NULL, SND_ASYNC); 
	// Adjust window size
	setWindowSize(1400, 600);
	Circle c1, c2, c3, c4;
	Rect r1, r2;
	Rect2 r;
	srand(time(NULL));
	r.draw();
	r.setXY(700, 50);
	r.setWH(1400, 20);
	r.draw();
	r.setXY(700, 550);
	r.setWH(1400, 20);
	r.draw();

	r1.setXY(75, 150);
	r1.setWH(100, 50);
	r1.draw();
	r2.setXY(75, 400);
	r2.setWH(100, 50);
	r2.draw();
	c1.setXY(25, 200);
	c1.setR(25);
	c1.draw();
	c2.setXY(125, 200);
	c2.setR(25);
	c2.draw();
	c3.setXY(25, 450);
	c3.setR(25);
	c3.draw();
	c4.setXY(125, 450);
	c4.setR(25);
	c4.draw();
	Sleep(2000);
	PlaySoundA("engine_sound.wav", NULL, SND_ASYNC); 

	while(!getKey(' '))
	{
		Sleep(10);
		int rand1=rand()%5;
		int rand2=rand()%10;
		int rand3=rand()%10;
		int c1x=c1.getX()+rand1;
		int c1y=c1.getY()+rand2;
		int c2x=c2.getX()+rand1;
		int c2y=c2.getY()+rand2;
		int r1x=r1.getX()+rand1;
		int r1y=r1.getY()+rand2;
		c1y=c1y-rand3;
		c2y=c2y-rand3;
		r1y=r1y-rand3;
		c1.move(c1x, c1y);
		r1.move(r1x, r1y);
		c2.move(c2x, c2y);

		int rand4=rand()%5;
		int rand5=rand()%10;
		int rand6=rand()%10;
		int c3x=c3.getX()+rand4;
		int c3y=c3.getY()+rand5;
		int c4x=c4.getX()+rand4;
		int c4y=c4.getY()+rand5;
		int r2x=r2.getX()+rand4;
		int r2y=r2.getY()+rand5;
		c3y=c3y-rand6;
		c4y=c4y-rand6;
		r2y=r2y-rand6;
		c3.move(c3x, c3y);
		r2.move(r2x, r2y);
		c4.move(c4x, c4y);

		if (getKey('W'))
		{
			c1y=c1.getY()-3;
			c2y=c2.getY()-3;
			r1y=r1.getY()-3;
			c1.move(c1x, c1y);
			r1.move(r1x, r1y);
			c2.move(c2x, c2y);
		}

		if (getKey('S'))
		{
			c1y=c1.getY()+3;
			c2y=c2.getY()+3;
			r1y=r1.getY()+3;
			c1.move(c1x, c1y);
			r1.move(r1x, r1y);
			c2.move(c2x, c2y);
		}

		if (getKey('I'))
		{
			c3y=c3.getY()-3;
			c4y=c4.getY()-3;
			r2y=r2.getY()-3;
			c3.move(c3x, c3y);
			r2.move(r2x, r2y);
			c4.move(c4x, c4y);
		}

		if (getKey('K'))
		{
			c3y=c3.getY()+3;
			c4y=c4.getY()+3;
			r2y=r2.getY()+3;
			c3.move(c3x, c3y);
			r2.move(r2x, r2y);
			c4.move(c4x, c4y);
		}

		if(c2x>=1360)
		{
			PlaySoundA("win_sound.wav", NULL, SND_ASYNC); 
			drawText(500,250,"THE FIRST CAR WON THE RACE!");
			break;
		}

		if(c4x>=1360)
		{
			PlaySoundA("win_sound.wav", NULL, SND_ASYNC); 
			drawText(500,250,"THE SECOND CAR WON THE RACE!");
			break;
		}

		if(r1y-25 <= 60 ||  c1y+25 >= 290 || c2y+25 >= 290)
		{
			PlaySoundA("car_horn.wav", NULL, SND_ASYNC); 
			drawText(500,250,"THE SECOND CAR WON THE RACE!");
			break;
		}

		if(r2y-25 <= 310 ||  c3y+25 >= 540 || c4y+25 >= 540)
		{
			PlaySoundA("car_horn.wav", NULL, SND_ASYNC); 
			drawText(500,250,"THE FIRST CAR WON THE RACE!");
			break;
		}

	}

	system("pause");
}
