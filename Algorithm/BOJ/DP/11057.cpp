#include<iostream>
using namespace std;

#define div 10007
int dp[10][1000] = { 0 };



int main()
{
	int N;

	cin >> N;


	
	for (int i = 0; i < 10; i++)
	{
		dp[i][0] = 1;
	}

	for (int k = 1; k < N; k++)
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = i; j < 10; j++)
			{
				dp[i][k] = (dp[i][k] % div + dp[j][k-1] % div) % div;
			}
		}
	}

	int sum = 0;

	for (int i = 0; i < 10; i++)
	{
		sum = (sum + dp[i][N-1]) % div;
	}
	cout << sum << endl;
	system("pause");
	// 11~19
	// 22~29

	// 111~119, 122~129 전꺼 i부터 9까지ㅣ
	return 0;
}