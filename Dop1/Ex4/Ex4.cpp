// Ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	/*ѕусть у нас есть двумерный массив int a[10][10].«аполнить массив указателей int* b[10]; 
	так, чтобы указатель b[0] указывал на строчку в массиве a, в которой сумма чисел максимальна€, 
	b[1] - на строку.в которой сумма чисел втора€ по величине, b[2] - на строчку с третьей по величине суммой и т.д.*/

	int a[10][10] = { { 1, 2, 3 }, { 9 }, { 1, 1, 1, 1, 1, 1, 1, 1 }, { 1, 2, 4, 6 }, { 10000 }, { 100 }, { 5 }, { 1, 5 }, { 1, 0, 6 }, { 7, 1, 2 } };
	int* b[10] = { NULL };
	int x[10] = {};
	for (int i = 0; i < 10; i++)
	{
		int* temp = a[i];
		for (int j = 0; j < 10; j++, temp++)
		{
			x[i] += *temp;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		int max = x[0];
		b[i] = a[0];
		int nMax = 0;
		for (int j = 0; j < 10; j++)
		{
			if (max < x[j])
			{
				max = x[j];
				b[i] = a[j];
				nMax = j;
			}
		}
		x[nMax] = 0;
	}

	for (int i = 0; i < 10; i++)
	{
		int* p = b[i];
		for (int j = 0; j < 10; j++, p++)
		{
			cout << *p << " ";
		}
		cout << "\n";
	}

	system("pause");
	return 0;
}

