#include "FigureList.h"

FiguresList::~FiguresList()
{
	clear();
}

void FiguresList::addFigure(Figure* figure)
{
	if (figure) {
		figures.push_back(figure);
	}
}

void FiguresList::showAll()
{
	for (auto figure : figures) {
		figure->show();
	}
}

void FiguresList::hideAll()
{
	for (auto figure : figures) {
		figure->hide();
	}
}

void FiguresList::clear()
{
	figures.clear();
}
