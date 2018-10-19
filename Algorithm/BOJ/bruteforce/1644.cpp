#include<iostream>
#include<vector>
using namespace std;

int prime[4000000] = {};
int p[4000000] = {};
int N;
int num_p = 0;
int cnt = 0;

int main()
{
	cin >> N;

	for (int i = 2; i <= N / 2; i++)
	{
		for (int j = 2; j <= N / i; j++)
		{
			p[i*j] = 1;
		}
	}

	for (int i = 2; i <= N; i++)
	{
		if (!p[i])
		{
			prime[num_p] = i;
			num_p++;
		}
	}

	for (int i = 0; i < num_p; i++)
	{
		int sum = 0;
		for (int j = i; j < num_p; j++)
		{
			sum += prime[j];
			if (sum == N)
			{
				cnt++;
				break;
			}
			else if (sum > N)
			{
				break;
			}
		}
	}

	cout << cnt << endl;
	

	return 0;
}