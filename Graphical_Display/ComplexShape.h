#pragma once
#include<iostream>
#include "Shape.h"
static int ilosc;

class ComplexShape : public Shape
{

public:
	Shape* ksztalty[5];
	Display* w;
	ComplexShape(Display* w);
	bool add(Shape* o);
	void draw();
};
