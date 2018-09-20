#include<iostream>
using namespace std;

int map[51][51] = {};
int visit[51][51] = {};
int w, h;
int cnt;
void dfs(int d1, int d2)
{
	visit[d1][d2] = 1;

	if (!visit[d1][d2+1] && map[d1][d2+1] && d2 < w) // 오른쪽
	{
		dfs(d1, d2+1);
	}
	if (!visit[d1][d2-1] && map[d1][d2-1] && d2 > 1) // 왼쪽
	{
		dfs(d1, d2 - 1);
	}
	if (!visit[d1-1][d2] && map[d1-1][d2] && d1 > 1) // 위쪽
	{
		dfs(d1-1, d2);
	}
	if (!visit[d1+1][d2] && map[d1+1][d2] && d1 < h ) // 아래쪽
	{
		dfs(d1+1, d2);
	}
	if (!visit[d1-1][d2 + 1] && map[d1-1][d2 + 1] && d1 > 1 && d2 < w) // 오른쪽위
	{
		dfs(d1-1, d2 + 1);
	}
	if (!visit[d1 - 1][d2 - 1] && map[d1 - 1][d2 - 1] && d1 > 1 && d2 > 1) // 왼쪽위
	{
		dfs(d1 - 1, d2 - 1);
	}
	if (!visit[d1 + 1][d2 + 1] && map[d1 + 1][d2 + 1] && d1 < w && d2 < h) // 오른쪽아래
	{
		dfs(d1 + 1, d2 + 1);
	}
	if (!visit[d1 + 1][d2 - 1] && map[d1 + 1][d2 - 1] && d1 < h && d2 > 1) // 왼쪽아래
	{
		dfs(d1 + 1, d2 - 1);
	}
}

int main()
{
	cin >> w >> h; // 3 2
	while (w != 0 && h != 0)
	{
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				cin >> map[i][j];
			}
		}
		cnt = 0;
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				if (!visit[i][j] && map[i][j])
				{
					dfs(i, j);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";

		for (int k = 1; k <= h; k++)
		{
			for (int m = 1; m <= w; m++)
			{
				map[k][m] = 0;
				visit[k][m] = 0;
			}
		}
		cin >> w >> h;
	}
	system("pause");
	return 0;
}


