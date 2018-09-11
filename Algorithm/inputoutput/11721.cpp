#pragma warning(disable 4996)
#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	char a[100];

	while (cin.get(a, 11))
	{
		cout << a << endl;
	}

	system("pause");
	return 0;
}