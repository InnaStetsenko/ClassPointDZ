#include "Point.h"

void Point::Setx(int x)
{
	this->x = x;
}

void Point::Sety(int y)
{
	this->y = y;
}

int Point::Getx() const
{
	return x;
}

int Point::Gety() const
{
	return y;
}

Point::Point() : Point(x) {};
Point::Point(int x) : Point(x,y) {};
Point::Point(int x, int y)
{
	Setx(x);
	Sety(y);
}

void Point::Print()
{
	cout << "Ñoordinate x is " << Getx() << "\n";
	cout << "Coordinate y is " << Gety() << "\n";
}

void Point::Shift_to_the_Left(int l)
{
	x -= l;
	cout << "Point coordinates after shift Left: x = " << x << " y = " << y << "\n";
}

void Point::Shift_to_the_Right(int r)
{
	x += r;
	cout << "Point coordinates after shift Right: x = " << x << " y = " << y << "\n";
}

void Point::ShiftUp(int u)
{
	y += u;
	cout << "Point coordinates after shift Up: x = " << x << " y = " << y << "\n";
}

void Point::ShiftDown(int d)
{
	y -= d;
	cout << "Point coordinates after shift Down: x = " << x << " y = " << y << "\n";
}

