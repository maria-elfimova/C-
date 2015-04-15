// Ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <functional>

using namespace std;

double f(double x)
{
	return x * x * x;
}

double integral(function<double(double)> f, double a, double b)
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
	cout << integral([](double i){return i * i * i; }, 0, 1) << "\n";
	cout << integral(f, 0, 1) << "\n";
	system("pause");
	// Ответ д.б. примерно 0.25

	return 0;
}

