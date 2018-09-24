#include<iostream>
#include<queue>
#include<algorithm>
#include<vector>
#include<math.h>
#include<tuple>
using namespace std;

vector<vector<pair<int, int>>> country;
vector<pair<int, int>> temp;
//vector<tuple<int,int,int,int,int>> ans;
vector<int> ans;

queue<pair<int,int>> q;
int N;
int c = 1;
int map[101][101] = {};
int color[101][101] = {};
int visit[101][101] = {};
/*
bool cmp(tuple<int, int, int, int, int> t1, tuple<int, int, int, int, int> t2)
{
	return get<4>(t1) < get<4>(t2);
}*/

int d(pair<int, int> p1, pair<int, int> p2)
{
	return abs(p1.first - p2.first) + abs(p1.second - p2.second) - 1;
}

void BFS(int x, int y) 
{
	visit[y][x] = 1;
	color[y][x] = c;
	temp.push_back(make_pair(x, y));

	if (!visit[y][x+1] && map[y][x+1] && x < N) // 오른쪽
	{
		q.push(make_pair(x+1, y));
		visit[y][x+1] = 1;
	}
	if (!visit[y][x - 1] && map[y][x - 1] && x > 1) // 왼쪽
	{
		q.push(make_pair(x - 1, y));
		visit[y][x - 1] = 1;
	}
	if (!visit[y - 1][x] && map[y - 1][x] && y > 1) // 위쪽
	{
		q.push(make_pair(x, y - 1));
		visit[y - 1][x] = 1;
	}
	if (!visit[y + 1][x] && map[y + 1][x] && y < N) // 아래쪽
	{
		q.push(make_pair(x, y + 1));
		visit[y + 1][x] = 1;
	}

	q.pop();
	if (!q.empty())
	{
		BFS(q.front().first,q.front().second);
	}
}

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> map[i][j];
		}
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (!visit[i][j] && map[i][j])
			{
				q.push(make_pair(j, i));
				BFS(j, i);
				c++;
				country.push_back(temp);
				temp.clear();
			}
		}
	}

	for (int i = 0; i < country.size(); i++)
	{
		for (int j = i + 1; j < country.size(); j++)
		{
			for (int k = 0; k < country[i].size(); k++)
			{
				for (int m = 0; m < country[j].size(); m++)
				{
					//ans.push_back(make_tuple(country[i][k].first, country[i][k].second, country[j][m].first, country[j][m].second,d(country[i][k], country[j][m])));
					ans.push_back(d(country[i][k], country[j][m]));
				}
			}
		}
	}

	sort(ans.begin(), ans.end());

	cout << ans[0] << endl;

	system("pause");
	return 0;
}