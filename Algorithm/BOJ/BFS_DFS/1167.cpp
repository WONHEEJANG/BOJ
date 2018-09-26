#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

long long V;
vector<pair<long long,int>> edge[100001] = {};
//int visit[100001] = {};
vector<int> visit(100001, 0);
long long m = 0;
long long node = 1;
void dfs(long long d, long long distance)
{
	if (m < distance)
	{
		m = distance;
		node = d;
	}
	visit[d] = 1;

	for (long long i = 0; i < edge[d].size(); i++)
	{
		if (!visit[edge[d][i].first])
		{
			visit[edge[d][i].first] = 1;
			dfs(edge[d][i].first, distance + edge[d][i].second);
		}
	}
}

int main()
{

	cin >> V;

	for (long long i = 0; i < V; i++)
	{
		long long node,i1 = 0;
		int i2;

		cin >> node;

		cin >> i1 >> i2;
		while (i1 != -1)
		{
			edge[node].push_back(make_pair(i1, i2));
			cin >> i1;
			if (i1 != -1)
				cin >> i2;
		}
	}
	vector<int> temp(100001,0);
	
	dfs(1,0);
	visit = temp;
	dfs(node, 0);
	cout << m << "\n";

	return 0;
}