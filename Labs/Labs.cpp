// Labs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class Point {
public:
	int *x, *y;
	Point(int x, int y) {
		this->x = new int(x);
		this->y = new int(y);
	}
	Point(const Point &point) {
		x = new int(*point.x);
		y = new int(*point.y);
	}
	~Point() {
		delete x;
		delete y;
	}
};

int main()
{
	Point p1(1, 2);
	Point p2(p1);
	*p2.x = 3;
	
	cout << *p1.x << *p1.y << endl;
	cout << *p2.x << *p1.y << endl;
	return 0;
}