#include<stdio.h>
#include<string>
#include<iostream>
#pragma warning(disable:4996)
using namespace std;

long long dp[3][5010] = {};
int seq[5010] = {};
int main()
{
	/*
	int j = 0;
	int temp;

	while (1)
	{
		temp = scanf("%1d", seq + j);
		j++;
	}*/

	char t[5010];

	cin >> t + 1;

	//	cout << int(t[0])- 48<< endl;
	//	cout << int(t[1]) - 48 << endl;
	//	cout << int(t[2]) - 48 << endl;
	//	cout << int(t[3]) - 48 << endl;


	for (int i = 1; i <= 5010; i++)
	{
		seq[i] = int(t[i]) - 48;
	}

	int idx = 1;

	for (int i = 1; i <= 5010; i++)
	{
		if (seq[i] == -48)
		{
			idx = i;
			break;
		}
	}


	dp[0][0] = 0;
	dp[1][0] = 0;
	dp[2][0] = 0;

	if (seq[1] > 0 && seq[1] < 10) // 첫 칸이 1~9 일 때
	{
		dp[0][1] = 1;
		dp[1][1] = 0;
		dp[2][1] = 1;
	}
	else
	{
		dp[0][1] = 0;
		dp[1][1] = 0;
		dp[2][1] = 0;
	}

	if (seq[1] * 10 + seq[2] >= 10 && seq[1] * 10 + seq[2] <= 26) // 1,2칸이 10부터 26까지 + 10, 20 빼고
	{
		if (seq[1] * 10 + seq[2] == 10 || seq[1] * 10 + seq[2] == 20) // 1,2칸이 10, 20
		{
			dp[0][2] = 0;
			dp[1][2] = 1;
			dp[2][2] = 1;
		}
		else
		{
			dp[0][2] = 1;
			dp[1][2] = 1;
			dp[2][2] = 2;
		}
	}
	else
	{
		dp[0][2] = 1;
		dp[1][2] = 0;
		dp[2][2] = 1;
	}



	for (int i = 3; i < idx; i++)
	{

		if (seq[i] > 0 && seq[i] < 10)
		{
			dp[0][i] = dp[2][i - 1]; // 연속아니고 i번째 개별
		}
		else
		{
			dp[0][i] = 0;
		}

		if (seq[i - 1] * 10 + seq[i] >= 10 && seq[i - 1] * 10 + seq[i] <= 26) // 10부터 26까지
		{
			dp[1][i] = dp[2][i - 2];
		}
		else
		{
			dp[1][i] = 0;
		}
		dp[2][i] = (dp[0][i] + dp[1][i]) % 1000000;
	}


	cout << dp[2][idx - 1] << endl;
	system("pause");
	return 0;
}