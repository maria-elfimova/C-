// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n = 0;
	cout << "Please write n: n = ";
	cin >> n;
	double sum = 0.0;
	n = 2 * n + 1;
	double fl = 1.0;
	for (int i = 1; i <= n; i += 2)
	{
		sum += 1 * fl / (i * i);
		fl *= -1.0;
		i += 2;
	}
	cout << "Result " << sum << "\n";
	system("pause");

	return 0;
}

