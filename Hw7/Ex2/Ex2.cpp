// Ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

double f(double x)
{
	return x*x*x;
}

double integral(double(*f)(double), double a, double b)
{
	double res = 0;
	for (int i = 0; i < 100; i++)
	{
		res += f((b - a) * i / 100) * ((b - a) * (i + 1) / 100 - (b - a) * i / 100);
	}
	return res;
}

// Интеграл: пример вызова


int _tmain(int argc, _TCHAR* argv[])
{
	cout << integral(f, 0, 1) << "\n";
	system("pause");
	// Ответ д.б. примерно 0.25

	return 0;
}

