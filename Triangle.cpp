#include <iostream>
#include "Point.h"
#include "Triangle.h"
using namespace std;

//triangle::triangle(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0, int x3 = 0, int y3 = 0) : x(x1, y1), y(x2, y2), z(x3, y3) {
//	cout << "Triangle() Called ";
//}

void triangle::SetStyle(Style* i) {
	st = i;
}

triangle::triangle(int x1 = 0, int y1 = 0, int x2 = 0, int y2 = 0, int x3 = 0, int y3 = 0, Style* p) : x(x1, y1), y(x2, y2), z(x3, y3) {
	SetStyle(p);
	cout << "Triangle() Called ";
}

void triangle::print() {
	cout << "("; x.print(); cout << ","; y.print(); cout << ","; z.print(); cout << ") " << endl;
	if (st != NULL) {
		if (st->GetFilled() != false) {
			st->print();
		}
	}
}

triangle::~triangle() {
	cout << "~Triangle() Called ";
	cout << "Destorying Triangle " << endl;
	x.~Point();
	y.~Point();
	z.~Point();
}
