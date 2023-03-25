#include "textDisplay.h"
void textDisplay::drawTriangle(int a1, int a2, int b1, int b2)
{
    std::cout << "Drawing a triangle from vectors " << "(" << a1 << ", " << a2 << ") , (" << b1 << "," << b2 << ")" << std::endl;
}

void textDisplay::drawCircle(int r)
{
    std::cout << "Drawing a circle with radius " << r << std::endl;
}

void textDisplay::drawParallelogram(int a1, int a2, int b1, int b2)
{
    std::cout << "Drawing a parallelogram from vectors " << "(" << a1 << ", " << a2 << ") , (" << b1 << "," << b2 << ")" << std::endl;
}