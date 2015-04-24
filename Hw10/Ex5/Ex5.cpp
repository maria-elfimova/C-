// Ex5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <memory>

using namespace std;

class time {
	int hour;
	int min;
public:
	time(int h = 0, int m = 0);
	void print();
	void inc();
};

void time::print()
{
	cout << hour << ":" << min;
}

class timeCollection {
	unique_ptr<time> a[100];
	int size;
public:
	timeCollection() : size(0)   {}

	void add(time* t)
	{
		a[size++] = unique_ptr<time>(t);
	}
	void print() const
	{
		for (int i = 0; i < size; i++)
			a[i]->print();
	}

};

int _tmain(int argc, _TCHAR* argv[])
{

	return 0;
}

