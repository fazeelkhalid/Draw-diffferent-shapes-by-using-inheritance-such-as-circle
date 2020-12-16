#pragma once

class Style {
	char color[10];
	bool isFilled;

public:
	Style(char* color , bool isFilled);
	void SetColor(char* col);
	bool GetFilled();
	void SetFilled(bool l);
	void print();
	~Style();
};
