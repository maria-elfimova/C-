// Ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "math.h"
#include <iostream>

using namespace std;
//Написать абстрактный класс shape и какие - нибудь два производных от него класса(Например, треугольник и ромб или прямоугольник или круг и т.д.).
//Для этих классов определить конструкторы и функции - методы area(площадь) и perim(периметр). (Метод draw в этой задаче определять не надо).

struct coordinate
{
	int x;
	int y;
public:
	coordinate(int x_, int y_) : x(x_), y(y_)
	{}
};

class shape
{
public:
	virtual float area();
	virtual float perim();
};

class triangle: shape
{
	coordinate *a;
	coordinate *b;
	coordinate *c;
public:
	triangle(coordinate *a_, coordinate *b_, coordinate *c_) : a(a_), b(b_), c(c_)
	{}
	float perim()
	{
		return sqrt(pow(float(a->x - b->x), 2) + pow(float(a->y - b->y), 2))
			+ sqrt(pow(float(c->x - b->x), 2) + pow(float(c->y - b->y), 2))
			+ sqrt(pow(float(a->x - c->x), 2) + pow(float(a->y - c->y), 2));
	}
	float area()
	{
		float p = perim() / 2;
		float A = sqrt(pow(float(a->x - b->x), 2) + pow(float(a->y - b->y), 2));
		float B = sqrt(pow(float(c->x - b->x), 2) + pow(float(c->y - b->y), 2));
		float C = sqrt(pow(float(a->x - c->x), 2) + pow(float(a->y - c->y), 2));
		return sqrt(p * (p - A) * (p - B) * (p - C));
	}
};

class rectangle : shape
{
	coordinate *a;
	coordinate *b;
	coordinate *c;
	coordinate *d;
public:
	rectangle(coordinate *a_, coordinate *b_, coordinate *c_, coordinate *d_)
	{
		if (sqrt(pow(float(a->x - b->x), 2) + pow(float(a->y - b->y), 2)) != sqrt(pow(float(c->x - d->x), 2) + pow(float(c->y - d->y), 2))
			|| sqrt(pow(float(c->x - b->x), 2) + pow(float(c->y - b->y), 2)) != sqrt(pow(float(a->x - d->x), 2) + pow(float(a->y - d->y), 2)))
		{
			cout << "Wrong parametrs \n";
		}
		else
		{
			a = a_;
			b = b_;
			c = c_;
			d = d_;
		}
	}
	float perim()
	{
		return 2 * (sqrt(pow(float(a->x - b->x), 2) + pow(float(a->y - b->y), 2))
			+ sqrt(pow(float(c->x - b->x), 2) + pow(float(c->y - b->y), 2)));
	}
	float area()
	{
		return sqrt(pow(float(a->x - b->x), 2) + pow(float(a->y - b->y), 2))
			* sqrt(pow(float(c->x - b->x), 2) + pow(float(c->y - b->y), 2));
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

