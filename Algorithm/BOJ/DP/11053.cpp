#include<iostream>
using namespace std;

int seq[1000] = { 0 };
int dp[1000][1000] = { 0 };

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> seq[i];
	}
	
	for (int i = 0; i < N; i++)
	{
		dp[i][0] = 1;
	}

	for (int i = 0; i < N; i++)
	{
		int last = 0;

		for (int length = 1; length < N - i; length++)
		{
			if(length == 1)
				last = seq[i + length -1 ];

			if (last < seq[i + length])
			{
				dp[i][length] = dp[i][length - 1] + 1;
				last = seq[i + length];
			}
			else
				dp[i][length] = dp[i][length - 1];
		}
	}
	int max = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (max < dp[i][j])
			{
				max = dp[i][j];
			}
		}
	}

	cout << max << endl;

	return 0;
}