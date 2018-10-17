#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int map[21][21] = {};
vector<int> player;

int main()
{
	int N; 

	cin >> N;

	for (int i = 0; i < N/2; i++)
	{
		player.push_back(0);
	}
	for (int i = N/2; i < N; i++)
	{
		player.push_back(1);
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> map[i][j];
		}
	}
	int start, link, d;
	int m = 100000;

	do
	{
		start = 0;
		link = 0;
		/*
		for (int i = 0; i < N / 2; i++)
		{
			for (int j = 0; j < N / 2; j++)
			{
				start = start + map[player[i]][player[j]];
				link = link + map[player[N - i - 1]][player[N - j - 1]];
			}
		}*/

		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (!player[i]) // 0 ÆÀ
				{
					if (!player[j])
					{
						start = start + map[i][j];
					}
				}
				else // 1ÆÀ
				{
					if (player[j])
					{
						link = link + map[i][j];
					}
				}
			}
		}
		d = abs(start - link);
		if (m > d)
			m = d;
	} while (next_permutation(player.begin(), player.end()));
	
	cout << m << endl;

	return 0;
}