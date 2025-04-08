#pragma once

#include <iostream>
#include <windows.h>

class Figure {
protected:
	int x;
	int y;
	int radius;
	HWND hwnd;
	HDC hdc;

	void setPosition(int x, int y);
public:
	Figure(int x, int y, int radius);
	virtual ~Figure();

	virtual void show() = 0;
	virtual void hide() = 0;
	virtual void move(int newX, int newY) = 0;
};