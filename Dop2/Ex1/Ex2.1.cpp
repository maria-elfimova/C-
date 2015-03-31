// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>

int getNearest(const int* a, int n, int x)
{
	if (x < *a)
		return *a;
	if (x > a[n - 1])
		return a[n - 1];

	int from = 0;
	int to = n - 1;
	while (to - from != 1)
	{
		if (a[(to - from) / 2] > x)
			to -= (to - from) / 2;
		else
		if (a[(to - from) / 2] < x)
			from += (to - from) / 2;
		else
			return a[(to - from)/ 2];
	}
	if (abs(a[from] - x) < abs(a[from - 1] - x))
		return a[from];
	else
		return a[from - 1];
}

int _tmain(int argc, _TCHAR* argv[])
{
	//const int a[] {1, 3, 7, 10, 20};
	//auto n = getNearest(a, 5, 13);

	/*const int a[] {1, 3, 7, 10, 20, 30, 50, 100, 101};
	auto n = getNearest(a, 9, 54);*/

	const int a[] = { 1, 3, 7, 10, 20 };
	auto n = getNearest(a, 5, 7);

	return 0;
}

