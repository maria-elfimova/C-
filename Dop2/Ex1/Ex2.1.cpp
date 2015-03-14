// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>

int getNearest(const int* a, int n, int x)
{
	const int* p = a;
	int i = n / 2;
	for (int k = 4; i < sqrt(float(n)) + 1; k + 2)
	{
		if (p[i] < x)
			i += n / k;
		else
		if (p[i] > x)
			i -= n / k;
		else return p[k];
	}
		if ((p[i] - x) < (x - p[i - 1]))
			return p[i];
		return p[i - 1];

}

int _tmain(int argc, _TCHAR* argv[])
{
	const int a[] {1, 3, 7, 10, 20};
	auto n = getNearest(a, 5, 13);
	// Найти в массиве а, состоящем из 5 чисел, число, 
	// ближайшее к 13.
	return 0;
}

