// Ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void order(int &x, int &y, int &z)
{
	if (z < y)
	{
		int temp = z;
		if (z < x)
		{
			z = x;
			x = temp;
		}
		else
		{
			z = y;
			y = temp;
		}
	}
	if (y < x)
	{
		int temp = x;
		x = y;
		y = temp;
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	//� - � order(x, y, z); -������ �������� � x, y, z ���, ����� x <= y � y <= z.
	//��������:  int a = 5, b = 1; c = 3;   order(a, b, c);    � ������ a == 1, b == 3, c == 5

	int x = 1;
	int y = 2;
	int z = 3;
	cout << "( " << x << ", " << y << ", " << z << " )\n";
	order(x, y, z);
	cout << "( " << x << ", " << y << ", " << z << " )\n";
	system("pause");

	return 0;
}

