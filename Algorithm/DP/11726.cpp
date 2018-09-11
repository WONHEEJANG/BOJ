#include<iostream>
using namespace std;

int dp[1001] = { 0 ,1, 2};

int tile(int n)
{
	if (n < 2)
	{
		return 1;
	}
	
	if (dp[n] > 0)
	{
		return dp[n];
	}
	else
	{
		dp[n] = ((tile(n - 1))% 10007 + (tile(n - 2)) % 10007) % 10007;
		return dp[n] ;
	}
}

int main()
{
	int N;
	cin >> N;
	cout << tile(N)<< endl;
	system("pause");
	return 0;
}