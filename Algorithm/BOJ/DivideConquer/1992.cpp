#include<stdio.h>
#pragma warning(disable:4996)

int s;
int map[65][65] = {};

bool check_w(int start_y, int start_x, int s)
{
	for (int i = start_y; i < start_y + s; i++)
	{
		for (int j = start_x; j < start_x + s; j++)
		{
			if (map[i][j])
				return false;
		}
	}
	return true;
}

bool check_b(int start_y, int start_x, int s)
{
	for (int i = start_y; i < start_y + s; i++)
	{
		for (int j = start_x; j < start_x + s; j++)
		{
			if (!map[i][j])
				return false;
		}
	}
	return true;
}

void solve(int start_y, int start_x, int s)
{
	if (check_w(start_y, start_x, s))
	{
		printf("0");
	}
	else if (check_b(start_y, start_x, s))
	{
		printf("1");
	}
	else
	{
		printf("(");
		solve(start_y, start_x, s / 2);
		solve(start_y, start_x + (s / 2), s / 2);
		solve(start_y + (s / 2), start_x, s / 2);
		solve(start_y + (s / 2), start_x + (s / 2), s / 2);
		printf(")");
	}
}

int main()
{
	scanf("%d\n", &s);

	for (int i = 1; i <= s; i++)
	{
		for (int j = 1; j <= s; j++)
		{
			scanf("%1d",&map[i][j]);
		}
	}
	solve(1, 1, s);

	return 0;
}