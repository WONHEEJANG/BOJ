#include<iostream>
using namespace std;

int dp[10000] = { 0 };
int grape[10000] = { 0 };


int max3(int a, int b, int c)
{
	if (a > b)
	{
		if (a > c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if (b > c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
}
int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> grape[i];
	}

	dp[0] = 0;
	dp[1] = grape[0];
	dp[2] = grape[0] + grape[1];

	for (int i = 3; i <=N; i++)
	{
		dp[i] = max3(dp[i - 3] + grape[i - 2] + grape[i-1], dp[i - 2] + grape[i-1], dp[i - 1]);
	}

	cout << dp[N] << endl;
	system("pause");
	return 0;
}