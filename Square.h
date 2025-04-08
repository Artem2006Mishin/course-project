#pragma once

#include <iostream>
#include <windows.h>
#include "Figure.h"

class Square : public Figure {
public:
	Square(int x, int y, int r);
	~Square() override = default;

	void show() override;
	void hide() override;
	void move(int newX, int newY) override;
};