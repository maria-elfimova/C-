// Ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int* reverse(int* a, int length)
{
	int* one = a;
	int* two = a + length - 1;
	for (int i = 0; i < length / 2; i++)
	{
		int temp = *two;
		*two = *one;
		*one = temp;
		one++;
		two--;
	}
	return a;
}

int _tmain(int argc, _TCHAR* argv[])
{
	// Описать функцию reverse. Должна позволять переставить: массив чисел в обратном порядке.
	//Желательно реализовать с помощью арифметики указателей (не используя [])

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	for (int* p = a; p < a + 10; p++)
		cout << *p << " ";
	cout << "\n";
	reverse(a, 10);
	for (int* p = a; p < a + 10; p++)
		cout << *p << " ";
	cout << "\n";
	system("pause");
	return 0;
}

