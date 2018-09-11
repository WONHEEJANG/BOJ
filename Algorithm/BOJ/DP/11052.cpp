#include<iostream>
using namespace std;

long long dp[1005] = {};
int card[1005] = {};
float per1card[1005] = {};
int max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
		return b;
}

long long calc(int N) //m_idx 는 1개당 카드 값이 가장 비싼 놈
{

	int m_idx = 1;
	int last = 0;

	for (int i = 1; i <= N; i++)
	{
		if (per1card[m_idx] < per1card[i])
		{
			m_idx = i;
		}
	}
	last = N - m_idx * (N / m_idx);
	if (dp[last] > 0 || last == 0)
	{
		dp[N] = card[m_idx] * (N / m_idx) + dp[last];
	}
	else
	{
		dp[N] = card[m_idx] * (N / m_idx) + calc(last);
	}
	return dp[N];
}


int main()
{
	int N;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> card[i];
	}

	for (int i = 1; i <= N; i++)
	{
		per1card[i] = float(card[i]) / float(i);
	}

	dp[1] = card[1];
	dp[2] = max(card[1] * 2, card[2]);


	cout << calc(N) << endl;
	system("pause");
	return 0;
}