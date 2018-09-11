#include<iostream>
using namespace std;

int dp[11] = { 0 };

int new_sum(int N)
{
	if (N < 2)
	{
		return 1;
	}
	if (N == 2)
	{
		return 2;
	}
	if (N == 3)
	{
		return 4;
	}
	if (dp[N] > 0)
	{
		return dp[N];
	}
	
	return dp[N] = new_sum(N - 1) + new_sum(N - 2) + new_sum(N - 3);
}
int main()
{
	int T, N;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> N;
		cout << new_sum(N) << endl;
	}
	system("pause");
	return 0;
}