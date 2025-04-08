#include <iostream>
#include <windows.h>
#include "Figure.h"

Figure::Figure(int x, int y, int radius) : x(x), y(y), radius(radius)
{
	if (radius <= 0) {
		throw std::invalid_argument("Радиус должен быть положительным");
	}
	hwnd = GetConsoleWindow();
	hdc = GetDC(hwnd);
}

Figure::~Figure()
{
	ReleaseDC(hwnd, hdc);
}

void Figure::setPosition(int x, int y)
{
	this->x = x;
	this->y = y;
}