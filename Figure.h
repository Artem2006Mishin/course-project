#pragma once

#include <iostream>
#include <windows.h>

class Figure {
protected:
	int x, y, radius;
	HWND hwnd;
	HDC hdc;
	COLORREF color;

	void setPosition(int x, int y);
public:
	Figure(int x, int y, int radius, COLORREF color);
	Figure();
	virtual ~Figure();

	virtual void show() = 0;
	virtual void hide() = 0;
	virtual void move(int newX, int newY) = 0;

	int getX();
	int getY();
	int getRadius();
};