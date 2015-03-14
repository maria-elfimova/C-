// Ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool question(const int *a)
{
	const int *x = a;
	for (int i = 0; i < 9; i++, x++)
	{
		const int* y = a;
		y++;
		for (int j = i + 1; j < 9; j++, y++)
		{
			if (*x - *y == 1 || *x - *y == -1)
				return true;
		}
	}
	return false;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a[10] = {2, 4, 8, 2, 50, 60, 13, 54, 18, 70};
	if (question(a))
		cout << "yes \n";
	else
		cout << "no \n";
	system("pause");
	return 0;
}

