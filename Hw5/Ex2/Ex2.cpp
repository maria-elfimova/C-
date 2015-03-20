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

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Please write numbers: \n";
	int a = 0;
	cin >> a;
	tree *myTree = new tree();
	while(a != 0)
	{
		myTree->add(a);
		cin >> a;
	}
	cout << "\n";
	myTree->print();
	system("pause");
	return 0;
}

