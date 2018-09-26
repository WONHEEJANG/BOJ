#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int,int>> v[10001] = {};
vector<int> visit(10001, 0);
long long N;
int m = 0;
int m_node = 1;

void dfs(int n, int distance)
{
	visit[n] = 1;
	if (m < distance)
	{
		m = distance;
		m_node = n;
	}
	for (int i = 0; i < v[n].size(); i++)
	{
		if (!visit[v[n][i].first])
		{
			visit[v[n][i].first] = 1;
			dfs(v[n][i].first, distance + v[n][i].second);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;

	int i1, i2 ,i3;

	for (int i = 2; i <= N; i++)
	{
		cin >> i1 >> i2 >> i3;
		v[i1].push_back(make_pair(i2, i3));
		v[i2].push_back(make_pair(i1, i3));
	}
	vector<int> temp(10001, 0);

	dfs(1, 0);
	visit = temp;
	dfs(m_node, 0);

	cout << m << "\n";

	return 0;
}