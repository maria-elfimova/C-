// Ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>

using namespace std;

template <class T>
typename T::value_type sum(T b, T e)
{
	typename T::value_type s = 0;
	for (auto p = b; p != e; p++)
	{
		if (*p > 0)
			s += *p;
	}
	return s;
}

template <class T>
auto sum1(T b, T e)
{
	decltype(*b + 0) s = 0;
	for (auto p = b; p != e; p++)
	{
		if (*p > 0)
			s += *p;
	}
	return s;
}

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> p = { 5, -3, -1, 3, -5, 2, 5 };
	auto s = sum(p.begin(), p.end());
	auto s1 = sum1(p.begin(), p.end());
	return 0;
}

