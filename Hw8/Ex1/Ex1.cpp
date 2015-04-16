// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <locale>
#include <iostream>
#include <vector>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "RUS");
	vector<int> v(100);
	cout << "¬водите числа, дл€ завершени€ ввода введите 0 \n";
	auto p = v.begin();
	for (; p != v.end(); p++)
	{
		int temp = -1;
		cin >> temp;
		if (temp == 0)
			break;
		*p = temp;
	}

	for (p--; p != v.begin(); p--)
	{
		cout << *p << " ";
	}
	cout << *p << "\n";
	system("pause");

	return 0;
}

