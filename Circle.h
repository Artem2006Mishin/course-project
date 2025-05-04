#pragma once

#include <iostream>
#include <windows.h>
#include "Figure.h"

class Circle : public Figure {
public:
	Circle(int x, int y, int r, COLORREF c);
	~Circle() override = default;

	void show() override;
	void hide() override;
	void move(int newX, int newY) override;
};