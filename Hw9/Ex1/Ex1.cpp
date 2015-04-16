// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <map>
#include <iostream>
#include <string>
using  namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	map<string, int> list;
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string name = "";
		int m = 0;
		cout << "Name?";
		cin >> name;
		cout << "Mark?";
		cin >> m;
		if (m == 5)
			list[name]++;
		else 
		if (list[name] == 0);
	}

	for (auto p = list.begin(); p != list.end(); p++)
	{
		cout << p->first << " " << p->second << "\n";
	}
	system("pause");

	return 0;
}

