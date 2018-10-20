#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

int N, K;
queue<pair<int, int>> q;
int visit[500001] = {};
int from[500001] = {};

vector<int> path;
int m = 500001;

void go(pair<int, int> x) // °¹¼ö, ÀÚ¸®
{
	visit[x.second] = 1;

	if (x.second == K)
	{
		if (x.first < m)
		{
			m = x.first;
		}
		return;
	}
	
	if (!visit[x.second - 1] && x.second > 0)
	{
		visit[x.second - 1] = 1;
		from[x.second - 1] = x.second;
		q.push(make_pair(x.first + 1, x.second - 1));
	}

	if (!visit[x.second + 1] && x.second + 1 <= 100000)
	{
		visit[x.second + 1] = 1;
		from[x.second + 1] = x.second;
		q.push(make_pair(x.first + 1, x.second + 1));
	}
	if (!visit[x.second * 2] && x.second * 2 <= 100000)
	{
		visit[x.second * 2] = 1;
		from[x.second * 2] = x.second;
		q.push(make_pair(x.first + 1, x.second * 2));
	}


	q.pop();

	if (!q.empty())
		go(q.front());
}
int main()
{
	cin >> N >> K;

	q.push(make_pair(0, N));
	go(q.front());

	cout << m << endl;

	vector<int> path;

	path.push_back(K);

	int fr = from[K];

	for (int i = 0; i < m; i++)
	{
		path.push_back(fr);
		fr = from[fr];
	}

	for (int i = path.size() - 1; i >= 0; i--)
	{
		cout << path[i] << " ";
	}
	return 0;
}