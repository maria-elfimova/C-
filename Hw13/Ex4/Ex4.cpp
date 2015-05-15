// Ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <thread>

using namespace std;

bool simple(int x)
{
	for (int i = 2; i < x; i++
)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Enter n \n";
	long long n = 0;
	cin >> n;
	int cnt1 = 0;
	int cnt2 = 0;

	thread th1([&]() {
		for (long long i = 2; i < n / 2; i++) {
			if (simple(i))
				cnt1++;
		}
	});
	thread th2([&]() {
		for (long long i = n / 2; i < n; i++) {
			if (simple(i))
				cnt2++;
		}
	});

	th1.join();
	th2.join();

	cout << cnt1 + cnt2 << "\n";
	system("pause");

	return 0;
}

