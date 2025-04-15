#pragma once

#include <iostream>
#include <windows.h>
#include "Figure.h"
#include "Circle.h"
#include "Square.h"

class ComplexFigure : public Figure {
private:
	Circle* circle;
	Square* square;
public:
	ComplexFigure(Circle* circle, Square* square);
	~ComplexFigure();

	void show() override;
	void hide() override;
	void move(int newX, int newY) override;
};
