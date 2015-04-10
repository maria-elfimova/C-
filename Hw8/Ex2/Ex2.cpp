#include "stdafx.h"
#include <iostream>

using namespace std;

template <class T> Ò swp(T &x, T &y)
{
	T temp = y;
	y = x;
	x = temp;
}

int _tmain(int argc, _TCHAR* argv[])
{

	double x = 1.1;
	double y = 2.2;
	swp(x, y);
	cout << x << y << "\n";  // 2.2 1.1
	system("pause");

	return 0;
}