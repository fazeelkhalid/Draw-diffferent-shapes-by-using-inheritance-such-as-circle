#pragma once
#include"Point.h"
#include "Style.h"
class Circle {
	Point center;
	Style* st;
	float radius;
public:
	//Circle();
	Circle(int x, int y, float r):center(x,y);
	void SetStyle(Style* i);
	Style* GetStyle();
	Circle(int x, int y, float r, Style* p = nullptr);
	void print();
	~Circle();
}; 
