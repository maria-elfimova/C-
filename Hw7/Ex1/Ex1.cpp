// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class abc
{
public:
	static int n;
	abc()
	{
		n++;
	}

	abc(const abc& a) {
		n++;
	}
	~abc()
	{
		n--;
	}
};
int abc::n = 0;

int main()
{
	abc *a = new abc();
	abc *b = new abc();
	
	int n = abc::n;

	delete a;
	n = abc::n;

	return 0;
}

