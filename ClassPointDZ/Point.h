#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;

public:
	void Setx(int x);
	void Sety(int y);
	int Getx() const;
	int Gety() const;

	Point();
	Point(int x);
	Point(int x, int y);

	void Print();
	void Shift_to_the_Left(int l);
	void Shift_to_the_Right(int r);
	void ShiftUp(int u);
	void ShiftDown(int d);
};


