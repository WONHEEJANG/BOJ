#include<stdio.h>
#pragma warning(disable:4996)
#include<stack>
#include<queue>
#include<vector>
using namespace std;

int map[1010][1010] = {};
int BFS_visit[1010] = {};
int DFS_visit[1010] = {};
int N, M, start;

stack<int> s;
queue<int> q;

void DFS(int start)
{
	DFS_visit[start] = 1;
	printf("%d", start);
	for (int i = 1; i <= N; i++)
	{
		if (map[start][i] && !DFS_visit[i])
			DFS(i);
	}
}
void BFS(int start)
{
	BFS_visit[start] = 1; // start visit
	printf("%d", start);
	for (int i = 1; i <= N; i++)
	{
		if (map[start][i] && !BFS_visit[i]) // start 연결노드들 push
		{
			q.push(i);
			BFS_visit[i] = 0;
		}
	}
	q.pop(); // start pop
	if (!q.empty())
		BFS(q.front());
}
int main()
{
	scanf("%d %d %d", &N, &M, &start);

	for (int i = 1; i <= M; i++)
	{
		int x, y;
		scanf("%d %d", &x, &y);
		map[x][y] = map[y][x] = 1;
	}

	DFS(start);
	printf("\n");
	q.push(start);
	BFS(start);

	system("pause");
	return 0;
}