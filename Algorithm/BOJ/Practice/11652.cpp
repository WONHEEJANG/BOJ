#include<iostream>
#include<algorithm>
using namespace std;

long long card[1000010] = {};

int cnt[1000010] = {};

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> card[i];
	}

	sort(card, card + N);

	int idx = 0;

	cnt[0] = 1;

	for (int i = 1; i < N; i++)
	{
		if (card[i - 1] != card[i])
		{
			idx = i;
		}
		cnt[idx] = cnt[idx] + 1;
	}

	int max_idx = 0;

	for (int i = 0; i < N; i++)
	{
		if (cnt[i] > cnt[max_idx])
		{
			max_idx = i;
		}
	}

	cout << card[max_idx] << endl;

	system("pause");
	return 0;
}