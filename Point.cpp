#include <iostream>
#include "Point.h"
using namespace std;

Point::Point() {
	this->x = 0;
	this->y = 0;
}

Point::Point(int x = 0, int y = 0) {
	this-> x = x;
	this-> y = y;
	cout << "Point(" << this-> x << "," << this-> y << ") Called ";
}

void Point::print() {
	cout << "("<< this-> x <<","<< this-> y <<")";
}

Point::~Point() {
	cout << "~Point(" << x << "," << y << ") Called ";
	cout << "Destorying Points " << endl;
	this->x = 0;
	this->y = 0;
}
