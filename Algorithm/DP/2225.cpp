#include<iostream>
using namespace std;

int dp[210][210] = {};
#define div 1000000000

int calc(int N, int K)
{
	if (K > 2)
	{
		for (int L = 0; L <= N; L++)
		{
			if (dp[N - L][K - 1] > 0)
			{
				dp[N][K] =( dp[N][K] + dp[N - L][K - 1] )% div;
			}
			else
			{
				dp[N][K] =( dp[N][K] + calc(N - L, K - 1)) % div;
			}
		}
	}

	return dp[N][K];
}


int main()
{
	int N, K;

	cin >> N >> K;

	for (int i = 0; i <= N; i++)
	{
		dp[i][0] = 0;
	}

	for (int i = 0; i <= N; i++)
	{
		dp[i][1] = 1;
	}
	for (int i = 0; i <= N; i++)
	{
		dp[i][2] = i+1;
	}
	cout << calc(N, K) << endl;
	system("pause");
	return 0;
}