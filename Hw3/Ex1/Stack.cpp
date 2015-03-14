// Ex1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

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
	int mult;
	int nul;

	public:
		stack(stackElem *h = new stackElem(0, NULL),
			int startNul = 0,
			int startMult = 1) :
			head(h),
			nul(startNul),
			mult(startMult)
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
				nul = false;
			}
			if (x != 0)
			{
				mult *= x;
			}
			else
				nul++;
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
				if (temp != 0)
				{
					mult /= temp;
				}
				else
				{
					nul--;
				}
					return temp;
			}
			return 0;
		}
		int& top()
		{
			return head->value;
		}

		int multiplication()
		{
			if (!nul)
				return mult;
			else
				return 0;
		}
};

int _tmain(int argc, _TCHAR* argv[])
{
	int a = 1;
	int b = 2;
	int c = 3;
	stack st;
	int mult = st.multiplication();
	st.push(a);
	st.push(c);
	mult = st.multiplication();
	a = st.pop();
	st.push(b);
	a = st.pop();
	mult = st.multiplication();

	st.top()++;

	return 0;
}

