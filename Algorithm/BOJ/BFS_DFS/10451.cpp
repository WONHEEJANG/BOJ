#include<iostream>
using namespace std;

int visit[1010] = {};
int map[1010] = {};

int T, N;
int cnt = 0;

void DFS(int d)
{
	if (!visit[d])
	{
		visit[d] = 1;
		DFS(map[d]);
	}
}


int main()
{
	cin >> T;

	for (T; T > 0; T--)
	{
		cnt = 0;
		cin >> N;
		
		int next;

		for (int i = 1; i <= N; i++)
		{
			cin >> next;
			map[i] =  next;
		}

		for (int j = 1; j <= N; j++)
		{
			if(!visit[j])
			{
				DFS(j);
				cnt++;
			}
		}

		cout << cnt << "\n";

		for (int j = 1; j <= N; j++)
		{
			map[j] = 0;
			visit[j] = 0;
		}

	}

	system("pause");
	return 0;
}