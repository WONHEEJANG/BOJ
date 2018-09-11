#include<iostream>
using namespace std;

long long dp[2][100] = { 0 };

int main()
{
	int N;

	cin >> N;

	dp[0][0] = 0; // 0��° 0
	dp[1][0] = 1; // 0��° 1

	dp[0][1] = 1; // 0��° 0
	dp[1][1] = 0; // 0��° 1

	for (int i = 2; i < N; i++)
	{
		dp[0][i] = dp[0][i - 1]+ dp[1][i - 1];
		dp[1][i] = dp[0][i - 1];
	}

	cout << dp[0][N-1] + dp[1][N-1]<< endl;
	system("pause");
	return 0;
}
