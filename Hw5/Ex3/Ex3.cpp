// Ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class timeCollection
{
	time* collection[100];
	int last;
public:
	timeCollection() : last(0)
	{}
	void add(time *val)
	{
		collection[last] = val;
		last++;
	}
	void print()
	{
		for (int i = 0; i < last; i++)
		{
			collection[i]->print;
		}
	}
};

class time
{
	int hour;
	int min;
public:
	time(int h = 0, int m = 0) : hour(h), min(m)
	{}
	virtual void print()
	{
		cout << hour << ":" << min;
	}

};

class time_with_sec : time
{
	int sec;
public:
	time_with_sec(int h, int m, int s) :
		time(h, m),
		sec(s)
	{}
	void print() override
	{
		time::print();
		cout << "." << sec;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	timeCollection tc;	// tc – набор данных о времени
	tc.add(new time(8, 30));
	tc.add(new time_with_sec(10, 00, 15));
	tc.add(new time(12, 10));
	tc.print();		// Напечатать 8:30  10:0.15  12:10

	return 0;
}

