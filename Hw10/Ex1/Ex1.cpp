// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <iostream>

using namespace std;

int sum(int i)
{
	int sum = 0;
	while (i != 0)
	{
		sum += (i % 10);
		i /= 10;
	}
	return sum;
}

int _tmain(int argc, _TCHAR* argv[])
{
	multimap<double, int> m;

	while (true)
	{
		int temp = -1;
		cin >> temp;
		if (temp == 0)
			break;
		m.insert(make_pair(sum(temp), temp));
	}

	for (auto k : m)
	{
		cout << k.second << " ";
	}
	cout << "\n ";
	system("pause");

	
	return 0;
}

