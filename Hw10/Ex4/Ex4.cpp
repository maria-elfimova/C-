// Ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <algorithm>

using namespace std; 

bool same(vector<int> p)
{
	int ex = *p.begin % 10;
	if (all_of(p.begin(), p.end(), [](int *i, int ex) { return (*i % 10 == ex); }))
		return true;
	return false;
}

int _tmain(int argc, _TCHAR* argv[])
{
	vector<vector<int>> p(3);
	p.insert = { 5, -3, -1, 3, -5, 2, 5 };
	p.insert = { 25, -35, -15, 35, -55, 25, 5 };
	p.insert = { 25, -35, -15, 3, -55, 25, 5 };

	bool b = any_of(p.begin, p.end, 
		[](vector<int> t) { return all_of(t.begin(), t.end(), same(t)); });

	return 0;
}

