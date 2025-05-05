#include <iostream>
#include <windows.h>
#include "Circle.h"
#include "Square.h"
#include "ComplexFigure.h"
#include "FigureList.h"

using namespace std;
// ВНЕС ИЗМЕНЕНИЕ
int main() {
    setlocale(LC_ALL, "RU");
    system("color F0");

    try {
        COLORREF colorBrush = RGB(137, 172, 118);
        COLORREF color = RGB(0, 0, 0);
        Figure* circle = new Circle(100, 200, 80, color);
        Figure* square = new Square(100, 200, 80, color, colorBrush);
        Figure* complexFig = new ComplexFigure((Circle*)circle, (Square*)square);

        Circle* circle1 = new Circle(300, 200, 80, color);
        Figure* square1 = new Square(300, 200, 80, color, colorBrush);

        FiguresList list;
        list.addFigure(complexFig);
        list.addFigure(circle1);
        list.showAll();
        cin.get();
        complexFig->move(500, 200);
        cin.get();
        circle1->move(300, 400);
        cin.get();
        list.hideAll();
        cin.get();

        list.clear();      

        list.addFigure(square1);
        list.showAll();
        cin.get();
        list.hideAll();
        cin.get();
    }
    catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}