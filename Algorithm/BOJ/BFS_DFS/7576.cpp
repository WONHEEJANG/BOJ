#include<iostream>
#include<queue>
#include<tuple>
using namespace std;

int M, N, c = 0;// M ���� N ����
int map[1010][1010] = {};
int visit[1010][1010] = {};
queue<tuple<int, int, int>> q;

// 1 �����丶��, 0 �������� �丶�� ,-1 �ƹ��͵� ����
void tmt(int x, int y, int cnt)
{
	visit[y][x] = 1;
	c = cnt;
	if (!visit[y][x + 1] && x < M && map[y][x + 1] == 0)//����
	{
		q.push(make_tuple(x + 1, y, cnt + 1));
		visit[y][x + 1] = 1;
		map[y][x + 1] = 1;
	}
	if (!visit[y][x - 1] && x > 1 && map[y][x - 1] == 0)//��
	{
		q.push(make_tuple(x - 1, y, cnt + 1));
		visit[y][x - 1] = 1;
		map[y][x - 1] = 1;
	}
	if (!visit[y + 1][x] && y < N && map[y + 1][x] == 0)//��
	{
		q.push(make_tuple(x, y + 1, cnt + 1));
		visit[y + 1][x] = 1;
		map[y + 1][x] = 1;
	}
	if (!visit[y - 1][x] && y > 1 && map[y - 1][x] == 0)//�Ʒ�
	{
		q.push(make_tuple(x, y - 1, cnt + 1));
		visit[y - 1][x] = 1;
		map[y - 1][x] = 1;
	}
	q.pop();
	if (!q.empty())
	{
		tmt(get<0>(q.front()), get<1>(q.front()), get<2>(q.front()));
	}
}


int main()
{
	cin >> M >> N; // M ���� N ����

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 1; i <= N; i++) // 4 y
	{
		for (int j = 1; j <= M; j++) // 6 x
		{
			if (!visit[i][j] && (map[i][j] == 1))
			{
				q.push(make_tuple(j, i, 0));
			}
		}
	}
	tmt(get<0>(q.front()), get<1>(q.front()), get<2>(q.front()));

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= M; j++)
		{
			if (map[i][j] == 0)
			{
				cout << -1 << "\n";
				system("pause");
				return 0;
			}
		}
	}
	cout << c << "\n";
	system("pause");

	return 0;
}