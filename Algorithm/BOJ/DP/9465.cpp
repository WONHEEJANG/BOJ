#include<iostream>
using namespace std;

int max3(int a, int b, int c)
{
	if (a > b)
	{
		if (a > c)
			return a;
		else
			return c;
	}
	else
	{
		if (c > b)
			return c;
		else
			return b;
	}
}
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int dp[3][100000] = { 0 };
int score[2][100000] = { 0 };

int main()
{
	int T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int N;
		cin >> N;

		for (int i = 0; i < 2; i++)
		{
			for (int j = i; j < N; j++)
			{
				cin >> score[i][j];
			}
		}
		dp[0][0] = 0;
		dp[1][0] = score[0][0];
		dp[2][0] = score[1][0];

		for (int i = 1; i < N; i++)
		{
			dp[0][i] = max3(dp[0][i - 1], dp[1][i - 1], dp[2][i - 1]);
			dp[1][i] = (max(dp[0][i - 1], dp[2][i - 1])) + score[0][i];
			dp[2][i] = (max(dp[0][i - 1], dp[1][i - 1])) + score[1][i];
		}
		cout << max3(dp[0][N - 1], dp[1][N - 1], dp[2][N - 1]) << endl;
	}
	system("pause");
	return 0;
}