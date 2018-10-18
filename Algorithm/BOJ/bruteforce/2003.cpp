#include<iostream>
#include<vector>
using namespace std;

long long N, M;
int cnt = 0;
vector<long long> num;

int main()
{
	cin >> N >> M;

	int tmp;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		num.push_back(tmp);
	}

	for (int i = 0; i < N; i++)
	{
		int sum = 0;
		for (int j = i; j < N; j++)
		{
			sum += num[j];
			if (M - sum > (N - j) * 30000)
				break;
			if (sum == M)
			{
				cnt++;
				break;
			}
		}
	}

	cout << cnt << endl;
	return 0;
}