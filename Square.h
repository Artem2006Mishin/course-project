#pragma once

#include <iostream>
#include <windows.h>
#include "Figure.h"

class Square : public Figure {
private:
	COLORREF colorBrush;
public:
	Square(int x, int y, int r, COLORREF c, COLORREF cb);
	~Square() override = default;

	void show() override;
	void hide() override;
	void move(int newX, int newY) override;
};