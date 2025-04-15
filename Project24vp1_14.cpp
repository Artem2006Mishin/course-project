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
        Figure* square = new Square(100, 200, 80);
        Figure* complexFig = new ComplexFigure((Circle*)circle, (Square*)square);

        Figure* circle1 = new Circle(300, 200, 80);
        Figure* square1 = new Square(300, 200, 80);

        /*FiguresList list;
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
        list.showAll();
        list.clear(); */     

        circle1->show();
        delete circle1;

        /*list.addFigure(square1);
        list.showAll();
        cin.get();
        list.hideAll();
        cin.get();*/
    }
    catch (const std::exception& e) {
        std::cerr << "Ошибка: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}