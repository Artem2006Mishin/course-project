#include "Square.h"

Square::Square(int x, int y, int r) : Figure(x, y, r) {}

void Square::show()
{
	POINT vertices[4];
	vertices[0] = { x, y - radius };
	vertices[1] = { x + radius, y };
	vertices[2] = { x, y + radius };
	vertices[3] = { x - radius, y };

    HPEN hPen = CreatePen(PS_SOLID, 2, RGB(0, 0, 0));
    HBRUSH hBrush = CreateSolidBrush(RGB(137, 172, 118));

    HGDIOBJ oldPen = SelectObject(hdc, hPen);
    HGDIOBJ oldBrush = SelectObject(hdc, hBrush);

    Polygon(hdc, vertices, 4);

    SelectObject(hdc, oldPen);
    SelectObject(hdc, oldBrush);
    DeleteObject(hPen);
    DeleteObject(hBrush);
}

void Square::hide()
{
    POINT vertices[4];
    vertices[0] = { x, y - radius };
    vertices[1] = { x + radius, y };
    vertices[2] = { x, y + radius };
    vertices[3] = { x - radius, y };

    HPEN hPen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
    HBRUSH hBrush = CreateSolidBrush(RGB(255, 255, 255));

    HGDIOBJ oldPen = SelectObject(hdc, hPen);
    HGDIOBJ oldBrush = SelectObject(hdc, hBrush);

    Polygon(hdc, vertices, 4);

    SelectObject(hdc, oldPen);
    SelectObject(hdc, oldBrush);
    DeleteObject(hPen);
    DeleteObject(hBrush);
}

void Square::move(int newX, int newY)
{
    hide();
    setPosition(newX, newY);
    show();
}