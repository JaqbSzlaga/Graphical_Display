#pragma once
#include<iostream>
#include "textDisplay.h"
#include "GraphicalDisplay.h"

class Shape: public textDisplay, public GraphicalDisplay
{
public:
	Shape();
	Display* RysujKsztalty;
	Shape(Display* w);
	virtual void draw();
	void changeDisplay(Display* newDisplay);
};

