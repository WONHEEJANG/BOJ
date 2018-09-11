#include<iostream>
using namespace std;


int dp[310] = { 0 };
int stair[310] = { 0 };

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> stair[i];
	}

	dp[1] = stair[1];
	dp[2] = stair[1] + stair[2];


	for (int i = 3; i <= N; i++)
	{
		dp[i] = max(dp[i - 2], dp[i - 3] + stair[i - 1]) + stair[i];
	}
	
	cout << dp[N] << endl;

	system("pause");


	return 0;
}