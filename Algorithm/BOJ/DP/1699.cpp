#include<iostream>
#include<math.h>
using namespace std;

int dp[100010] = { 0 };

int calc(int N)
{
	int t = int(sqrt(N))*int(sqrt(N));
	
	if (N == 2 || N == 3)
	{
		dp[N] = N;
	}

	else
	{
		if ((dp[t] == 0 || dp[N - t] == 0)&& N-t != 0)
		{
			dp[N] = calc(t) + calc(N - t);
		}
		else
		{
			dp[N] = dp[t] + dp[N - t];
		}
	}
	return dp[N];
}


int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= sqrt(N); i++)
	{
		dp[i*i] = 1;
	}

	
	cout << calc(N) << endl;
	system("pause");
	return 0;
}