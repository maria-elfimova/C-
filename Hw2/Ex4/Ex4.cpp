// Ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void twice(int* a)
{
	*a *= 2;
}

int _tmain(int argc, _TCHAR* argv[])
{
	//������� �������, ������� ��������� ������ �����.� �������� ��������� ���������� ��������� �� �����.������ ������ :
	
	int i = 5;
	cout << "twice(" << i << ") = ";
	twice(&i);
	cout << i << "\n";
	system("pause");
	return 0;
}

