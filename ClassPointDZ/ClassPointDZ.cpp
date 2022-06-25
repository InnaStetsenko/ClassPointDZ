#include "Point.h"

int main()
{
	Point A;
	A.Print();
	Point B(3);
	B.Print();
	Point C(1, 2);
	
	Point D(9, 0);
	D.Print();
	D.ShiftUp(4);
	D.Print();
}