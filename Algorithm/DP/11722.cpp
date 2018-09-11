#include<iostream>
using namespace std;

int seq[1001] = { 0 };
int dp[1001] = { 0 };

int main()
{
	int N;
	cin >> N;
	int max_l = 0;
	
	for (int i = 1; i <= N; i++)
	{
		cin >> seq[i];
	}

	for (int i = 1; i <= N; i++)
	{
		max_l = 0;
		for (int j = 1; j < i; j++)
		{
			if (seq[j] > seq[i] && max_l < dp[j])
				max_l = dp[j];
		}
		dp[i] = max_l + 1;
	}
	int max = 0;

	for (int i = 1; i <= N; i++)
	{
		if (max < dp[i])
		{
			max = dp[i];
		}
	}

	cout << max << endl;
	return 0;
}