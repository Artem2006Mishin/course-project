#include <iostream>
#include <windows.h>
#include "Figure.h"

Figure::Figure() : x(0), y(0), radius(0)
{
	hwnd = GetConsoleWindow();
	hdc = GetDC(hwnd);
}

Figure::Figure(int x, int y, int radius) : Figure()
{
	this->x = x;
	this->y = y;
	this->radius = radius;

	if (radius <= 0) {
		throw std::invalid_argument("Радиус должен быть положительным");
	}
}

Figure::~Figure()
{
	hide();
	ReleaseDC(hwnd, hdc);
}

void Figure::setPosition(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Figure::getX()
{
	return x;
}

int Figure::getY()
{
	return y;
}

int Figure::getRadius()
{
	return radius;
}
