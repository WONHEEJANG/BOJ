#include<iostream>
using namespace std;

int dp[1010] = { 0 };
int seq[1010] = { 0 };
int main()
{
	int N;
	int max_length = 0;
	int max = 0;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> seq[i];
	}
	
	for (int j = 1 ;j <= N; j++)
	{
		max_length = 0;
		for (int i = 0; i < j; i++)
		{
			if (seq[i] < seq[j] && dp[i] > max_length)
			{
				max_length = dp[i];
			}
		}
		dp[j] = max_length + 1;
	}

	for (int i = 1; i <= N; i++)
	{
		if (max < dp[i])
			max = dp[i];
	}
	cout << max << endl;
	system("pause");
	return 0;
}
