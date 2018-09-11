#include<iostream>
using namespace std;

int dp[1001] = { 0 };

int tile(int N)
{
	if (N < 2)
	{
		return 1;
	}
	if (dp[N] > 0)
	{
		return dp[N];
	}
	return dp[N] = ((tile(N - 1))% 10007 + (2 * tile(N - 2)) % 10007) % 10007;
}
int main()
{
	int N;
	cin >> N;
	cout << tile(N) << endl;
	system("pause");
	return 0;
}