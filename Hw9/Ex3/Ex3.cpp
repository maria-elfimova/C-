// Ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mysort(int n, vector<int> &v)
{
	auto b = pow(10, n);
	sort(v.begin(), v.end(),
		[](int i, int j, int b)
	{		
	       return i % b < j % b;
	});
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

	mysort(3, v);

	for (auto k = v.begin(); k != p; k++)
	{
		cout << *k << " ";
	}
	cout << "\n ";
	system("pause");
	sort(v.begin(), v.end(),
		[](int i, int j)
	{      return i % 100 < j % 100;
	});

	return 0;
}

