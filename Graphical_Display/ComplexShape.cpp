#include "ComplexShape.h"

ComplexShape::ComplexShape(Display* w)
{
	RysujKsztalty = w;
}

bool ComplexShape::add(Shape* o)
{
	if (ilosc < 5)
	{	
		ksztalty[ilosc] = o;
		ilosc++;
		return true;
	}
	else return false;
}

void ComplexShape::draw()
{
	for (int i = 0; i < ilosc; i++)
	{
		ksztalty[i]->draw();
	}
}
