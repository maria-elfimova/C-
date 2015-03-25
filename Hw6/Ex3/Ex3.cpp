// Ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
using namespace std;

//The function takes a string and an integer array of two, and writes the seat numbers of the first and the last gap in the string.
void fistLastSpace(const string str, int* sp)
{
	*sp = 0;
	*(sp + 1) = str.length() - 1;

	for (; sp[0] < str.length(), str[sp[0]] != ' '; sp[0]++) {}
	for (; sp[1] > 0, str[sp[1]] != ' '; sp[1]--) {}

}

int _tmain(int argc, _TCHAR* argv[])
{
	string str = "This is a bit strange string...";
	int sp[2] = { 0 };
	fistLastSpace(str, sp);

	return 0;
}

