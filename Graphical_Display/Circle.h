#pragma once
#include<iostream>
#include "Shape.h"
template<typename T,typename T2>
class Circle: public Shape
{

public:
	T promien;
	Circle();
	Circle(T _r);
	Circle(T2* w, T r);
	void draw();
	void setPromien(T _r);
	void getPromien();
};

template<typename T,typename T2>
inline Circle<T,T2>::Circle()
{
	promien = "promien";

}
template<typename T,typename T2>
inline Circle<T,T2>::Circle(T _r)
{
	promien=_r;
}

template<typename T, typename T2 >
void Circle<T,T2>::setPromien(T _r)
{
	promien = _r;
}

template<typename T,typename T2 >
inline void Circle<T,T2>::getPromien()
{
	return promien;
}


template<typename T,typename T2>
Circle<T, T2>::Circle(T2* w, T r)
{
	RysujKsztalty = w;
	promien = r;
}
template<typename T,typename T2>
void Circle<T,T2>::draw()
{
	RysujKsztalty->drawCircle(promien);
}


