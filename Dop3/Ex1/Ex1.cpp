// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

#define TRACE(x) cout << #x << " = " << (x)

int _tmain(int argc, _TCHAR* argv[])
{
	int *a = new int[] { 5, 2, 3, 4 };
	TRACE(a[2]);
	cout << "\n";
	system("pause");

	return 0;
}

