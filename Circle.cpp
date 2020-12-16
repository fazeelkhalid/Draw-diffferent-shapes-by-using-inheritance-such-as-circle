#include <iostream>
#include "Point.h"
#include "Circle.h"
#include "Style.h"

using namespace std;

Circle::Circle() {
	this->center;
	this->radius = 0;
}

Circle::Circle(int x, int y, float r){
	this->radius = r;
	cout << "Circle() Called ";
}

void Circle::SetStyle(Style* i) {
	st = i;
}

Style* Circle::GetStyle() {
	return st;
}

//Circle::Circle(int x = 0, int y = 0, float r = 0, Style* p ) : center(x, y) {
//	SetStyle(p);
//	this->radius = r;
//	cout << "Circle() Called ";
//}


void Circle::print() {
	cout << "("; this->center.print(); cout << ","; cout <<this->radius << ") " << endl;
	if (st != NULL) {
		if (st->GetFilled() != false) {
			st->print();
		}
	}
}

Circle::~Circle () {
	cout << "~Circle() Called ";
	cout << "Destorying Circle " << endl;
	center.~Point();
	this->radius = 0;
}
