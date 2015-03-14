// Ex5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

class stack
{
	struct stackElem
	{
		int value;
		stackElem* next;
	public:
		stackElem(int x, stackElem* nextElem) : value(x), next(nextElem)
		{}
	};
	stackElem *head;

public:
	stack(stackElem *h = new stackElem(0, NULL))
	{}

	void push(int x)
	{
		if (head->value != 0)
		{
			stackElem *temp = new stackElem(x, head);
			head = temp;
		}
		else
		{
			head->value = x;
		}
	}
	int pop()
	{
		int temp = head->value;
		if (head->next != NULL)
		{
			head->value = head->next->value;
			stackElem *forDel = head->next;
			head->next = head->next->next;
			delete forDel;
			return temp;
		}
		return 0;
	}
};
//При выполнении может происходить утечка памяти(если в pop() вызывается исключение).
//Изменить функцию, чтобы выполнялиcь те же действия, в том же порядке(new  pop  delete), но чтобы при исключении память не терялась

void f(stack &s)
{
	int* p = new int[1000];
	// … тут, допустим, мы что-то делаем с p и s	  
	try
	{
		cout << s.pop();
		// … а тут еще что-то делаем с p и s   
	}
	finally
	{
		delete[] p;
	}
	// Потенциальная утечка памяти: delete может и не вызваться!
}


int _tmain(int argc, _TCHAR* argv[])
{	
	return 0;
}

