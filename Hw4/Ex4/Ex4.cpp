// Ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

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
time::time(int h, int min) : hour(h), min(min)
{
	if ( h < 0 || h > 23)
		throw "Nevernoe kolichestvo chasov";
	if ( min < 0 || min > 59)
		throw "Nevernoe kolichestvo minut";

}

void time::inc()
{
	min++;
	if (min == 60) {
		min = 0;
		hour++;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	try
	{
		time* ex = new time(25, 14);
	}
	catch (char * s)
	{
		cout << "something is wrong... \n";
	}
	system("pause");
	return 0;
}

