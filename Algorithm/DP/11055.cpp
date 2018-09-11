#include<iostream>
using namespace std;

int seq[1001] = { 0 };
int dp[1001] = { 0 };

int main()
{
	int N;
	cin >> N;
	int max = 0;
	for (int i = 1; i <= N; i++)
	{
		cin >> seq[i];
	}

	for (int i = 1; i <= N; i++)
	{
		max = 0;
		for (int j = 1; j < i; j++)
		{
			if (seq[j] < seq[i] && max < dp[j])
				max = dp[j];
		}
		dp[i] = max + seq[i];
	}

	int m = 0;
	for (int i = 1; i <= N; i++)
	{
		if (m < dp[i])
			m = dp[i];
	}

	cout << m << endl;

	return 0;
}