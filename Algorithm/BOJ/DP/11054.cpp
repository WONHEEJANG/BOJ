#include<iostream>
using namespace std;

int Di[1010] = { 0 };
int Dd[1010] = { 0 };
int dp[1010] = { 0 };


int seq[1010] = { 0 };


int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> seq[i];
	}

	int maxi =0;
	int maxd =0;
	
	for (int i = 1; i <= N; i++)
	{
		maxi = 0;
		for (int j = 0; j < i; j++)
		{
			if (seq[j] < seq[i] && maxi < Di[j])
			{
				maxi = Di[j];
			}
		}
		Di[i] = maxi + 1;
	}

	for (int i = N; i >= 1; i--)
	{
		maxd = 0;
		for (int j = N + 1; j > i; j--)
		{
			if (seq[j] < seq[i] && maxi < Dd[j])
			{
				maxd = Dd[j];
			}
		}
		Dd[i] = maxd + 1;
	}



	int m = 0;

	for (int i = 1; i <= N; i++)
	{
		dp[i] = Di[i] + Dd[i] - 1;
	}

	for (int i = 1; i <= N; i++)
	{
		if (m < dp[i])
			m = dp[i];
	}


	cout << m << endl;
	system("pause");

	return 0;
}