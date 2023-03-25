#pragma once
#include<iostream>
#include "Shape.h"
class Parallelogram : public Shape
{

public:
	int x1, x2, y1, y2;
	Parallelogram(Display* w, int a1, int a2, int b1, int b2);
	void draw();

};

