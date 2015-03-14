// Ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Please write numbers: ";
	int num = 1;
	int result = 1;
	while (num != 0)
	{
		cin >> num;
		if (num != 0)
			result *= num;
	}

	cout << "Result " << result << "\n";
	system("pause");

	return 0;
}

