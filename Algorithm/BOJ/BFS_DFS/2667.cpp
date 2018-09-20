#include<stdio.h>
#include<windows.h>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;

int visit[26][26] = {};
int map[26][26] = {};
int N, b;
vector<int> v;

void DFS(int d1, int d2)
{
	visit[d1][d2] = 1;
	b++;
	if (!visit[d1+1][d2] && d1 < N && map[d1 + 1][d2]) // 오른쪽
	{
		DFS(d1 + 1, d2);
	}
	if (!visit[d1 - 1][d2] && d1 > 0 && map[d1 - 1][d2]) // 왼쪽
	{
		DFS(d1 - 1, d2);
	}
	if (!visit[d1][d2 + 1] && d2 < N&& map[d1][d2 + 1]) // 위쪽
	{
		DFS(d1, d2 + 1);
	}
	if (!visit[d1][d2 - 1] && d2 > 0 && map[d1][d2 - 1]) // 아래쪽
	{
		DFS(d1, d2 - 1);
	}
}

int main()
{
	scanf("%d", &N);
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			scanf("%1d",&map[i][j]);
		}
	}
	int cnt = 0;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			b = 0;
			if (!visit[i][j] && map[i][j])
			{
				DFS(i, j);
				cnt++;
				v.push_back(b);
			}
		}
	}
	printf("%d\n", cnt);

	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		printf("%d\n", v[i]);
	}
	system("pause");
	return 0;
}