#pragma once
#include"Point.h"
#include "Style.h"

class triangle {
	Point x;
	Point y;
	Point z;
	Style* st;
public:
	//triangle(int x1, int y1, int x2, int y2, int x3, int y3 );
	void SetStyle(Style* i);
	triangle(int x1, int y1, int x2, int y2, int x3, int y3, Style* p = nullptr);
	void print();
	~triangle();
};
