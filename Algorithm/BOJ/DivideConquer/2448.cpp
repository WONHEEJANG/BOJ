#include<iostream>
#include<cstring>
using namespace std;

int N;
char map[3073][3073] = {};

void solve(int y,int x, int s)
{
	if (s == 3)
	{
		map[y][x] = '*';
		map[y + 1][x - 1] = '*'; 
		map[y + 1][x + 1] = '*';
		for (int i = -2; i <= 2; i++)
		{
			map[y + 2][x + i] = '*';
		}

		return;
	}
	solve(y, x, s / 2);
	solve(y + (s / 2), x - (s / 2), s / 2);
	solve(y + (s / 2), x + (s / 2), s / 2);
}

int main()
{
	cin >> N;
	memset(map, ' ', sizeof(map));

	solve(0,N,N);

	for (int i = 0; i < N; i++)
	{
		for (int j = 1; j < 2 * N ; j++)
		{
			cout << map[i][j];
		}
		cout << "\n";
	}

	return 0;
}