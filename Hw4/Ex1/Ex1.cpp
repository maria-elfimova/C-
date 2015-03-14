// Ex11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

/*a.Определить класс «ромб»(с диагоналями, параллельными осям координат).Для него определить конструктор и метод draw.
(В методе draw вместо рисования можно просто печатать координаты отрезков).
б.Определить какой - нибудь класс, производный от класса «ромб»(например, «заштрихованный ромб» или или «ромб с диагоналями» и т.д.)*/
struct coordinate
{
	int x;
	int y;
public:
	coordinate(int x_, int y_) : x(x_), y(y_)
	{}
};

class rhombus
{
	coordinate *a;
	coordinate *b;
	coordinate *c;
	coordinate *d;
public:
	rhombus(coordinate *a_, coordinate *b_, coordinate *c_, coordinate *d_)
	{
		if (a_->x != c_->x && a_->y != c_->y || b_->x != d_->x && b_->y != d_->y)
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

	virtual void draw()
	{
		cout << "(" << a->x << ", " << a->y << ") - " << "(" << b->x << ", " << b->y << ") \n";
		cout << "(" << b->x << ", " << b->y << ") - " << "(" << c->x << ", " << c->y << ") \n";
		cout << "(" << c->x << ", " << c->y << ") - " << "(" << d->x << ", " << d->y << ") \n";
		cout << "(" << d->x << ", " << d->y << ") - " << "(" << a->x << ", " << a->y << ") \n";
	}

	~rhombus()
	{
		delete a, b, c, d;
	}
};

class colorRhombus : rhombus
{
	string color = "";
	public:
	colorRhombus(coordinate *a_, coordinate *b_, coordinate *c_, coordinate *d_, string col):
		rhombus(a_, b_, c_, d_), color(col)
	{}

	void draw()
	{
		rhombus::draw();
		cout << "Color is ";
		cout << color;
		cout << "\n";
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	rhombus *example = new rhombus(new coordinate(1, 5), new coordinate(6, 8), new coordinate(1, 15), new coordinate(17, 8));
	//rhombus *example1 = new rhombus(new coordinate(2, 6), new coordinate(6, 8), new coordinate(1, 15), new coordinate(17, 8));
	colorRhombus *example2 = new colorRhombus(new coordinate(1, 6), new coordinate(6, 8), new coordinate(1, 15), new coordinate(17, 8), "black");
	example->draw();
	example2->draw();
	system("pause");
	//delete example, example1, example2;
	return 0;
}

