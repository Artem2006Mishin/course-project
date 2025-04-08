#pragma once

#include <vector>
#include "Figure.h"

class FiguresList {
private:
	std::vector<Figure*> figures;
public:
	~FiguresList();
	void addFigure(Figure* f);
	void showAll();
	void hideAll();
	void clear();
};
