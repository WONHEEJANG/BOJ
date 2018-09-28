#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<long long> card;
vector<long long> check;
vector<int> ans(500001,0);
int N, M; 

int main()
{
	cin >> N;

	long long c;

	for (int i = 0; i < N; i++)
	{
		cin >> c;
		card.push_back(c);
	}
	sort(card.begin(), card.end());

	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> c;
		check.push_back(c);
	}

	int l, r, mid;

	for (int j = 0; j < M; j++)
	{
		l = 0;
		r = card.size() - 1;
		mid = 0;
		if (card[l] == check[j])
		{
			ans[j] = 1;
			continue;
		}
		if (card[r] == check[j])
		{
			ans[j] = 1;
			continue;
		}
		while (l <= r)
		{
			mid = (l + r) / 2;
			if (card[mid] == check[j])
			{
				ans[j] = 1;
				break;
			}
			else if (card[mid] < check[j])
			{
				l = mid + 1;
			}
			else
			{
				r = mid - 1;
			}
		}
	}

	for (int i = 0; i < M; i++)
	{
		cout << ans[i] << " ";
	}

	return 0;
}