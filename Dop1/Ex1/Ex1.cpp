// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void set(int *a, int n, int x)
{
	for (int i = 0; i < n; i++, a++)
	{
		*a = x;
	}
}

void copy(int *b, const int *a, const int n)
{
	for (int i = 0; i < n; i++, a++, b++)
	{
		*b = *a;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	int a[10];
	set(a, 10, 999); // заполнить массив a длины 10 числами 999
	int b[10];
	copy(b, a, 10); // Скопировать 10 чисел из массива a в массив b

	return 0;
}

