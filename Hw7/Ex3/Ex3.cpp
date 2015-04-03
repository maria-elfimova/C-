// Ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

struct note
{
public:
	int salary;
	string name;
	note(int s, string n) : salary(s), name(n) {}
};

int _tmain(int argc, _TCHAR* argv[])
{
	note *v[100];
	int count = 0;
	while (true)
	{
		int salary = 0;
		string name;
		cin >> name;
		if (name == "*")
			break;
		cin >> salary;
		note *elem = new note(salary, name);
		v[count] = elem;
		count++;
	}

	int maxSal = 0;
	for (int i = 0; i < count; i++)
	{
		if (v[i]->salary > maxSal)
			maxSal = v[i]->salary;
	}

	for (int i = 0; i < count; i++)
	{
		if (v[i]->salary == maxSal)
			cout << v[i]->name << "\n";
	}

	system("pause");
	return 0;
}

