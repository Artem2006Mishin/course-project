#include <iostream>
#include <windows.h>
#include <stdexcept>
#include "Circle.h"

Circle::Circle(int x, int y, int r, COLORREF c) : Figure(x, y, r, c) {}

void Circle::show()
{
	HPEN hPen = CreatePen(PS_SOLID, 2, color);
	SelectObject(hdc, hPen);
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
	DeleteObject(hPen);
}

void Circle::hide()
{
	COLORREF bgColor = RGB(255, 255, 255);
	HPEN hPen = CreatePen(PS_SOLID, 2, bgColor);
	SelectObject(hdc, hPen);
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
	DeleteObject(hPen);
}

void Circle::move(int newX, int newY)
{
	hide();
	setPosition(newX, newY);
	show();
}
