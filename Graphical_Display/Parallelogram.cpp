#include "Parallelogram.h"

Parallelogram::Parallelogram(Display* w, int a1, int a2, int b1, int b2)
{
	RysujKsztalty = w;
	x1 = a1;
	x2 = a2;
	y1 = b1;
	y2 = b2;
}

void Parallelogram::draw()
{
	RysujKsztalty->drawParallelogram(x1, x2, y1, y2);
}
