#include "ComplexFigure.h"

ComplexFigure::ComplexFigure(Circle* circle, Square* square)
{
    if (circle->getX() == square->getX() &&
        circle->getY() == square->getY() &&
        circle->getRadius() == square->getRadius())
    {
        this->circle = circle;
        this->square = square;
    }
    else {
        throw std::invalid_argument("Значения должны быть одинаковыми");
    }
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