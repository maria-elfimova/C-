// Ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Please write n: ";
	int n = 0;
	cin >> n;
	long result = 1;
	for (int i = 1; i <= n; i++)
	{
		int temp = i;
		while (temp % 5 == 0)
		{
			temp /= 5;
			result /= 2;
		}
		result *= temp;
		while (result % 10 == 0)
			result /= 10;
		result %= 10000;
	}
	result %= 10;
	cout << "Result " << result << "\n";	
	system("pause");

	return 0;
}

