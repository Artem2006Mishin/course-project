#include "ComplexFigure.h"

ComplexFigure::ComplexFigure(int x, int y, int r) : Figure(x, y, r)
{
    circle = new Circle(x, y, radius);
    square = new Square(x, y, radius);
}

ComplexFigure::~ComplexFigure()
{
    delete circle;
    delete square;
    circle = nullptr;
    square = nullptr;
}

void ComplexFigure::show()
{
    circle->show();
    square->show();
}

void ComplexFigure::hide() {
    circle->hide();
    square->hide();
}

void ComplexFigure::move(int newX, int newY) 
{
    circle->move(newX, newY);
    square->move(newX, newY);
}