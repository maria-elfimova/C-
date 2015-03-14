// Ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool compare(const char* s1, const char* s2)
{
	const char* p1 = s1;
	const char* p2 = s2;
	for (; *p1 != '\0' && *p2 != '\0'; p1++, p2++)
	{
		while (*p1 == ' ')
			p1++;
		while (*p2 == ' ')
			p2++;
		if (*p1 != *p2)
			return false;
	}
	while (*p1 == ' ')
		p1++;
	while (*p2 == ' ')
		p2++;
	if (*p1 != '\0' || *p2 != '\0')
		return false;
	return true;
}

int _tmain(int argc, _TCHAR* argv[])
{
	char s1[100];
	char s2[100];
	cout << "Vvedite pervuy stroku: \n";
	cin.getline(s1, 100);
	cout << "Vvedite vtoruy stroku: \n";
	cin.getline(s2, 100);
	bool b = compare(s1, s2);

	if (b)
		cout << "Stroki odinakovie :) \n";
	else
		cout << "Stroki raznie :( \n";
	system("pause");

	return 0;
}

