#include<iostream>
using namespace std;

int paper[10000][10000] = {};
int cnt1 = 0, cnt2 = 0 , cnt3 = 0; // -1 , 0 , 1

bool same(int x, int y, int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (paper[y][x] != paper[y + i][x + j])
				return false;
		}
	}
	return true;
}

void solve(int x, int y, int n)
{
	if (same(x, y, n))
	{
		if (paper[y][x] == -1)
			cnt1++;
		if (paper[y][x] == 0)
			cnt2++;
		if (paper[y][x] == 1)
			cnt3++;
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				solve(x + i * (n / 3), y + j * (n / 3), n / 3);
			}
		}
	}
}


int main()
{
	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> paper[i][j];
		}
	}

	solve(0, 0, N);

	cout << cnt1 << endl;
	cout << cnt2 << endl;
	cout << cnt3 << endl;

	system("pause");
	return 0;
}