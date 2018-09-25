#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<long long> v[100001] = {};
int visit[100001] = {};
int p[100001] = {};

long long N;
queue<long long> q;

void bfs(int d)
{
	visit[d] = 1;
	for (int i = 0; i < v[d].size(); i++)
	{
		if (!visit[v[d][i]])
		{
			visit[v[d][i]] = 1;
			q.push(v[d][i]);
			p[v[d][i]] = d;
		}
	}
	q.pop();
	if (!q.empty())
	{
		bfs(q.front());
	}
}

int main()
{
	cin >> N;

	for (int i = 0; i < N - 1; i++)
	{
		long long i1, i2;

		cin >> i1 >> i2;
		v[i1].push_back(i2);
		v[i2].push_back(i1);
	}
	q.push(1);
	bfs(1);
	for (int i = 2; i <= N; i++)
	{
		cout << p[i] << "\n";
	}
	return 0;
}