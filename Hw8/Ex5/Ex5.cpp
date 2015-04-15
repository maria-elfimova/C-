// Ex5.cpp : Defines the entry point for the console application.
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
	void print(treeElem *elem)
	{
		if (elem != NULL)
		{
			print(elem->left);
			cout << elem->value << " ";
			print(elem->right);
		}
	}

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

public:
	void add(int val)
	{
		add(val, root);
	}

	void print()
	{
		print(root);
	}
};

void forEach(tree t)
{

}

int _tmain(int argc, _TCHAR* argv[])
{
	tree* t;
	t.add(3);
	t.add(5);

	forEach(t, [](int& x) { x *= 2; });
	forEach(t, [](int& x) { cout << x; });

	return 0;
}

