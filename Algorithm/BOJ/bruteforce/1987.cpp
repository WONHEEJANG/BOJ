#include<iostream>
using namespace std;

char map[20][20] = {};
int visit[20][20] = {};

int check[26] = {};
int R, C;
int m = 0;

void go(int y, int x, int cnt)
{
	check[int(map[y][x]) - int('A')] = 1;
	if (m < cnt)
	{
		m = cnt;
	}
	
	visit[y][x] = 1;

	if(y>0 && !visit[y-1][x] && !check[int(map[y-1][x]) - int('A')])
		go(y - 1, x, cnt + 1);//╩С
	if(y<R-1 && !visit[y + 1][x] && !check[int(map[y+1][x]) - int('A')])
		go(y + 1, x, cnt + 1);//го
	if(x>0 && !visit[y][x - 1] && !check[int(map[y][x-1]) - int('A')])
		go(y, x - 1, cnt + 1);//аб
	if(x<C-1 && !visit[y][x + 1] && !check[int(map[y][x+1]) - int('A')])
		go(y, x + 1, cnt + 1);//©Л

	check[int(map[y][x]) - int('A')] = 0;
	visit[y][x] = 0;
}


int main()
{
	cin >> R >> C;

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> map[i][j];
		}
	}

	go(0, 0, 1);


	cout << m << endl;

	return 0;
}