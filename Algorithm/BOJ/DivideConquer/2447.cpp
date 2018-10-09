#include<iostream>
#include<cstring>
using namespace std;

int N;
char map[2201][2201] = {};
void solve(int y, int x, int s)
{
	if (s == 1)
	{
		map[y][x] = '*';
		return;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1)
				continue;
			solve(y + i * (s / 3), x + j * (s / 3), s / 3);
		}
	}
}

int main()
{
	cin >> N;

	memset(map, ' ', sizeof(map));

	solve(1, 1, N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cout << map[i][j];
		}
		cout << "\n";
	}
	return 0;
}