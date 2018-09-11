#include<iostream>
using namespace std;

int dp[40] = { 1 };

int fill(int N)
{
	int temp = 0;

	for (int i = N; i > 0; i = i - 2)
	{
		if (i == N)
		{
			if (dp[i - 2] > 0)
			{
				temp = temp + 3 * dp[i-2];
			}
			else
			{
				temp = temp + 3 * fill(i - 2);
			}
		}
		else
		{
			if (dp[i - 2] > 0)
			{
				temp = temp + 2 * dp[i - 2];
			}
			else
			{
				temp = temp + 2 * fill(i - 2);
			}
		}
	}
	return temp;
}

int main()
{
	int N;
	
	cin >> N;

	cout << fill(N) << endl;
	system("pause");
	return 0;
}