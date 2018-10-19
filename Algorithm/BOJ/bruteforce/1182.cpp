#include<iostream>
#include<vector>
using namespace std;

long long N, S;
vector<int> v;
int flag[20] = {};
int cnt = 0;

int main()
{
	cin >> N >> S;

	int tmp;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}
	int t = N;

	for (int i = 1; i < (1 << N); i++) // 00..00 ~ 11..11
	{
		int casee = i;
		int sum = 0;

		for (int j = 0; j < t; j++) 
		{
			flag[j] = casee % 2;
			casee /= 2;
		}

		for (int k = 0; k < t; k++)
		{
			if (flag[k])
			{
				sum += v[k];
			}
		}
		if (sum == S)
			cnt++;
	}

	cout << cnt << endl;

	return 0;
}