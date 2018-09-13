#include<iostream>
#include<stdio.h>
#pragma warning(disable:4996)
using namespace std;
int max(int a, int b) { return a > b ? a : b; }
int min(int a, int b) { return a > b ? b : a; }
int gcd(int a, int b)
{
	int small = min(a, b);
	int big = max(a, b);

	if (small == 0)
		return big;
	else
		return gcd(big%small, small);
}

int main()
{
	int T,N;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int arr[101] = {};
		int sum = 0;

		cin >> N;
		
		for (int j = 0; j < N; j++)
		{
			cin >> arr[j];
		}

		for (int k = 0; k < N-1; k++)
		{
			for (int m = k+1; m < N; m++)
			{
				sum = sum + gcd(arr[k], arr[m]);
			}
		}
		cout << sum << "\n";
	}
	system("pause");

	return 0;
}