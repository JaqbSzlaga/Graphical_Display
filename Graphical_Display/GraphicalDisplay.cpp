#include "GraphicalDisplay.h"

void GraphicalDisplay::drawTriangle(int a1, int a2, int b1, int b2)
{
	double a = a2 / static_cast<double>(a1);
	double z= b2 / static_cast<double>(b1);
	double t = static_cast<double>(a2) - static_cast<double>(b2) / (static_cast<double>(a1) - static_cast<double>(b1));
	double b = static_cast<double>(a2 - (a1 * t));

		for (int y = a2; y >= b2; y--)
		{
			for (int x = 0; x <= a1; x++)
			{
				if (y <= a * x && y >= z * x && y >= (t* x + b))
				{
					std::cout << "t";
				}
				else
					std::cout << " ";
			}
			std::cout << std::endl;
		}
		try
		{
		
			if (b2 >= 0)
				throw std::out_of_range("\nWartosc b2 nie jest liczba calkowita ujemna\n");
			if (a1 < 0 || a2 < 0 || b1 < 0)
				throw std::out_of_range("\nJedna z wartosci a1,a2,b1 jest liczba ujemna\n");
			if (a1 == b1 || a2 == b2)
				throw std::out_of_range("\nZle dobrane wspolrzedne dla trojkata\n");
		}
		catch (std::exception& e)
		{
			std::cerr << e.what();
		}
   
}

void GraphicalDisplay::drawCircle(int r)
{
	
	for (int y = -r; y <= r; y++)
	{
		for (int x = -r; x <=r; x++)
		{
			if (y * y + x * x <= r*r)
				std::cout << "c";
			else std::cout << " ";
		}
		std::cout << std::endl;
	}

	try
	{
		if (r < 0)
			throw std::out_of_range("\nSrednica kola poniezej zera\n");
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
		
	}
}

void GraphicalDisplay::drawParallelogram(int a1, int a2, int b1, int b2)
{
	double a = a2 / static_cast<double>(a1);
	double aa = b2 / static_cast<double>(b1);
	double aaa = a2 / static_cast<double>(-b1);
	double aaaa = b2/static_cast<double>(-a1);
	double b = static_cast<double>(a2 - a1 * aa);
	double bb = static_cast<double>(b2 - b1 * a);
	double bbb = static_cast<double>(b2 -b1 * aaaa);
	double bbbb = static_cast<double>(a2 - a1 * aaa);
	

	for (int y = a2; y >= b2; y--) {
		for (int x = 0; x <= a1 + b1; x++) {
			if (y <= a * x && y >= aa * x && y <= (aa * x + b) && y >= (a * x + bb) && y >= aaa * x && y <= (aaa * x + bbbb) && y<= aaaa * x && y >= (aaaa * x + bbb))
				std::cout << 'p';
			else std::cout << ' ';
		}
		std::cout << std::endl;
	}
	try
	{

		if (b2 >= 0)
			throw std::out_of_range("\nWartosc b2 nie jest liczba calkowita ujemna\n");
		if (a1 < 0 || a2 < 0 || b1 < 0)
			throw std::out_of_range("\nJedna z wartosci a1,a2,b1 jest liczba ujemna\n");
		if (a1 == b1 || a2 == b2)
			throw std::out_of_range("\nZle dobrane wspolrzedne dla rownolegloboku\n");
		
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	
}
