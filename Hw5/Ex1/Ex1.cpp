// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

class complex
{
	double re, im;
public:
	complex(double re_ = 0, double im_ = 0) :
		re(re_), im(im_)
	{}
	friend complex& operator*=(complex c1, complex c2);
	friend complex operator*(complex c1, complex c2);
};

complex operator*(complex c1, complex c2)
{
	complex res;
	res.re = c1.re * c2.re - c1.im * c2.im;
	res.im = c1.re * c2.im + c2.re * c1.im;
	return res;
}

complex& operator*=(complex c1, complex c2)
{
	return operator*(c1, c2);
}

int _tmain(int argc, _TCHAR* argv[])
{

	return 0;
}

