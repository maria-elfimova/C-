// Ex3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

class list
{
	class listElem
	{
	public:
		int value;
		listElem* next;
		listElem(int x, listElem* nextElem) : value(x), next(nextElem)
		{}
	};

	listElem *head;

public:
	list()
	{}
	void add(int val)
	{
		if (head != NULL)
		{
			listElem *temp = head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			listElem *elem = new listElem(val, NULL);
			temp->next = elem;
		}
		else head = new listElem(val, NULL);
	}

	void print()
	{
		if (head != NULL)
		{
			listElem *temp = head;
			while (temp->next != NULL)
			{
				cout << temp->value << " ";
				temp = temp->next;
			}
		}
		else
			cout << "List is empty";
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "VVedite n = ";
	int n = 0;
	cin >> n;
	list *myList = new list();
	for (int i = 0; i <= n; i++)
	{
		myList->add(n - i);
	}
	myList->print();
	system("pause");
	return 0;
}

