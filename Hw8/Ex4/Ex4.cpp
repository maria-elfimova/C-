// Ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "vector"
#include <iostream>
#include <list>

using namespace std;

template <class T> void print(T x)
{
	for (auto p = x.begin(); p != x.end(); p++) 
	{
		cout << *p << " ";
	}
	cout << "\n";
}

template <class T> void print2(T x)
{
	for (int i : x)
	{
		cout << *i << " ";
	}
	cout << "\n";
}


int _tmain(int argc, _TCHAR* argv[])
{
	vector<string> v{ "a", "b", "c" };
	list<int> l{ 1, 2, 3 };

	print(v);
	print(l);
	//print2(v);
	//print2(l);

	system("pause");

	return 0;
}

