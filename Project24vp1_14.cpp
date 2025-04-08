#include <iostream>
#include <windows.h>
#include "Circle.h"
#include "Square.h"
#include "ComplexFigure.h"
#include "FigureList.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    system("color F0");

    try {
        Figure* circle = new Circle(100, 200, 80);
        Figure* square = new Square(300, 200, 80);
        Figure* complexFig = new ComplexFigure(500, 200, 80);

        FiguresList list;
        list.addFigure(circle);
        list.addFigure(square);
        list.addFigure(complexFig);

        list.showAll();
        cin.get();
        complexFig->move(500, 400);

    }
    catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}