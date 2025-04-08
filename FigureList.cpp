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
		if (figure) figure->show();
	}
}

void FiguresList::hideAll()
{
	for (auto figure : figures) {
		if (figure) figure->hide();
	}
}

void FiguresList::clear()
{
	for (auto figure : figures) {
		//delete figure;
	}
}
