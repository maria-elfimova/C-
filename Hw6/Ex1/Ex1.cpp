// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class rational
{
	double numerator;
	double denominator;
public:
	rational(double x = 0, double y = 1) : numerator(x), denominator(y)
	{}
	operator double() const
	{
		return numerator / denominator;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	//Определить класс rational(рациональное число) с полями ‘числитель’ и ‘знаменатель’,
	//и для него задать конструктор и преобразование в double:

	rational r(1, 3);
	double x = r;  // x = 0.33333

	return 0;
}

