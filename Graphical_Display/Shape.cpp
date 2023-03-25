#include "Shape.h"

Shape::Shape()
{
	RysujKsztalty=0;
}

Shape::Shape(Display* w)
{
	RysujKsztalty = w;
}

void Shape::draw()
{
}

void Shape::changeDisplay(Display* newDisplay)
{
	RysujKsztalty = newDisplay;
}
