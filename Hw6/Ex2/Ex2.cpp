// Ex2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class tree
{
	class treeElem
	{
	public:
		int value;
		treeElem *left;
		treeElem *right;
		treeElem(int val) : value(val), left(NULL), right(NULL)
		{}
	};
	treeElem *root;

	void add(int val, treeElem *&temp)
	{
		if (temp == NULL)
			temp = new treeElem(val);
		else
		if (temp->value >= val)
			add(val, temp->left);
		else if (temp->value < val)
			add(val, temp->right);
	}
	bool find_even(treeElem *elem)
	{
		if (elem != NULL)
		{
			find_even(elem->left);
			if (elem->value % 2 == 0)
				throw true;
			find_even(elem->right);
		}
	}

public:
	void add(int val)
	{
		add(val, root);
	}

	bool find_even()
	{
		try
		{
			find_even(root);
		}
		catch (bool e)
		{
			if (e)
				return true;
			return false;
		}
		return false;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	tree *myT = new tree();
	myT->add(5);
	myT->add(4);
	myT->add(7);

	if (myT->find_even())
		cout << "there is even element in tree \n";
	else
		cout << "there isn't even element in tree \n";
	system("pause");
	return 0;
}

