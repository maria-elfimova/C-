// Ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

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

bool mycmp(int i, int j)
{
	return sum(i) < sum(j);
}

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> v(100);
	auto p = v.begin();
	for (; p != v.end(); p++)
	{
		int temp = -1;
		cin >> temp;
		if (temp == 0)
			break;
		*p = temp;
	}

	sort(v.begin(), v.end(), mycmp);

	for (auto k = v.begin(); k != p; k++)
	{
		cout << *k << " ";
	}
	cout << "\n ";
	system("pause");

	return 0;
}

