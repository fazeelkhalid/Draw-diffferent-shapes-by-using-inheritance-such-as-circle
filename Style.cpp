#include <iostream>
#include "Style.h"
using namespace std;

Style::Style(char* col = '\0', bool isFilled = false) {
	SetColor(col);
	SetFilled(isFilled);
	cout << "Style() Called ";
}

void Style::SetColor(char* col) {
	for (int i = 0; col[i] != '\0'; i++) {
		color[i] = col[i];
		if (col[i + 1] == '\0') {
			color[i + 1] = '\0';
		}
	}
}

void Style::SetFilled(bool l) {
	if (l == 0 || l == false) {
		isFilled = false;
	}
	if (l == 1 || l == true) {
		isFilled = true;
	}
}

bool Style::GetFilled() {
	return this->isFilled;
}

void Style::print() {
	if(isFilled!=false){
		cout << "Color: " << color << " , isFilled: " << isFilled << "\n";
	}
}

Style::~Style() {
	cout << "~Style() Called ";
	cout << "Destorying Style " << endl;
}
