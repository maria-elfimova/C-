// Ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <list>
using namespace std;

template <class T>
class queue
{
	list<T> v;
public:
	void push(int temp)
	{
		v.push_back(temp);
	}
	T pop()
	{
		T temp = v.front();
		v.pop_front();
		return temp;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	queue<int> q;
	q.push(3); q.push(7);q.push(11);
	cout << q.pop() << " ";   // 3
	cout << q.pop() << "\n";   // 7
	system("pause");
	return 0;
}

