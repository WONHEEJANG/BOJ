#include<stdio.h>
#include<Windows.h>
#include<tuple>
#include<queue>
#include<vector>
#include<algorithm>
#pragma warning(disable:4996)
using namespace std;

int N, M, c; // N 세로 M 가로
int miro[101][101] = {};
int visit[101][101] = {};
queue<tuple<int, int, int>> q;
vector<int> v;

void bfs(int d2, int d1, int cnt)
{
	if (d2 == N && d1 == M)
	{
		//v.push_back(cnt + 1);
		printf("%d", cnt + 1);
	}
	visit[d2][d1] = 1;
	if (!visit[d2 + 1][d1] && miro[d2 + 1][d1] && d2 < N)	// 아래
	{
		visit[d2 + 1][d1] = 1;
		q.push(make_tuple(d2 + 1, d1, cnt + 1));
	}
	if (!visit[d2][d1 + 1] && miro[d2][d1 + 1] && d1 < M)	// 우
	{
		visit[d2][d1 + 1] = 1;
		q.push(make_tuple(d2, d1 + 1, cnt + 1));
	}
	if (!visit[d2 - 1][d1] && miro[d2 - 1][d1] && d2 > 1)	// 위
	{
		visit[d2 - 1][d1] = 1;
		q.push(make_tuple(d2 - 1, d1, cnt + 1));
	}
	if (!visit[d2][d1 - 1] && miro[d2][d1 - 1] && d1 > 1)	// 좌
	{
		visit[d2][d1 - 1] = 1;
		q.push(make_tuple(d2, d1 - 1, cnt + 1));
	}
	q.pop();
	if (!q.empty())
	{
		bfs(get<0>(q.front()), get<1>(q.front()), get<2>(q.front()));
	}
}

int main()
{
	scanf("%d %d\n", &N, &M);
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			scanf("%1d", &miro[i][j]);
		}
	}
	q.push(make_tuple(1, 1, 0));
	bfs(1, 1, 0);

	sort(v.begin(), v.end());

	system("pause");
	return 0;
}