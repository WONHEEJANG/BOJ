#include<iostream>
using namespace std;

long long dp[110] = {};


int main()
{
	int T;
	cin >> T;

	for (int j = 0; j < T; j++)
	{
		int N;
		cin >> N;

		dp[1] = dp[2] = dp[3] = 1;
		dp[4] = dp[5] = 2;

		for (int i = 6; i <= N; i++)
		{
			dp[i] = dp[i - 1] + dp[i - 5];
		}

		cout << dp[N] << endl;
	}
	system("pause");
	return 0;
}