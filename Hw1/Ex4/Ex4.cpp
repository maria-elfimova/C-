// Ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a[10] {2, 4, 3, 6, 7, 8, 0, 0, 0, 0};
	//int i = 0;
	/*while (a[i] != 0)
		i++;
	cout << "The number of non-zero elemebts is " << i << "\n";
	*/
	int* p = a;
	for (; *p != 0; p++)
		;
	cout << "The number of non-zero elemebts is " << p - a << "\n";
	system("pause");

	return 0;
}

