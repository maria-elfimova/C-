// Ex2.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	//������������ ������������ ���������� : int* a[10]; 
	//�.������� ������������ ������� ����� 1, 2, 3� � ��������� ��������� � ������� a.
	//�.���������������� ������� ��� : � ������ ������� ��������� ������� 1, ��������� 0.
	//�.���������� ������.

	int* a[10];
	for (int i = 0; i < 10; i++)
	{
		int* p = new int[i + 1];
		for (int* j = p; j < p + i; j++)
			*j = 0;
		p[i] = 1;
		a[i] = p;
		for (int j = 0; j <= i; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
	system("pause");
	for (int i = 0; i < 10; i++)
		delete[] a[i];

	return 0;
}

