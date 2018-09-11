#include<iostream>
using namespace std;

long long dp[100010] = { 0 };
long long seq[100010] = { 0 };

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	int N;
	long long m = 0;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> seq[i];
	}

	dp[1] = seq[1];
	m = seq[1];

	for (int i = 2; i <= N; i++)
	{
		dp[i] = max(dp[i - 1] + seq[i], seq[i]);
	}
	
	
	for (int i = 1; i <= N; i++)
	{
		if (m < dp[i])
			m = dp[i];
	}

	cout << m << endl;
	system("pause");

	return 0;
}