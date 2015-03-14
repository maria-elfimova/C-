// Ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void max(int *a)
{
	int *p = NULL;
	int max = 0;
	for (int i = 0; i < 10; i++, a++)
	{
		if (max < *a)
		{
			p = a;
			max = *a;
		}
	}
	*p = 0;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a[10] = { 1, 4, 6, 8, 2, 7, 0, 6, 3, 2 };
	max(a);
	return 0;
}

