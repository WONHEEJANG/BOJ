#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<long long> card;
vector<long long> check;
vector<long long> ans(500000, 0);
long long N, M;
long long f[20000001] = {};

int main()
{
	long long c;

	cin >> N;

	for (long long i = 0; i < N; i++)
	{
		cin >> c;
		card.push_back(c);
		f[c + 10000000] ++;
	}
	
	sort(card.begin(), card.end());

	cin >> M;

	for (long long i = 0; i < M; i++)
	{
		cin >> c;
		check.push_back(c);
	}

	long long l, r, mid;

	for (long long i = 0; i < M; i++)
	{
		l = 0; r = card.size() - 1; 
		mid = 0;
		if (card[l] == check[i])
		{
			ans[i] = f[card[l] + 10000000];
			continue;
		}
		if (card[r] == check[i])
		{
			ans[i] = f[card[r] + 10000000];
			continue;
		}
		while (l < r)
		{
			mid = (l + r) / 2;

			if (card[mid] == check[i])
			{
				ans[i] = f[card[mid] + 10000000];
				break;
			}
			else if (card[mid] < check[i])
				l = mid + 1;
			else
				r = mid - 1;
		}
	}

	for (long long i = 0; i < M; i++)
	{
		cout << ans[i] << " ";
	}

	return 0;
}