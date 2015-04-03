// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class abc
{
private:
	static int n;
public:
	abc()
	{
		n++;
	}
	int num()
	{
		return n;
	}
	~abc()
	{
		n--;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	abc *a = new abc();
	abc *b = new abc();
	//int n = b->num();

	return 0;
}

