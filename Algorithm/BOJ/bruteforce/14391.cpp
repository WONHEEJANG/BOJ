#include<stdio.h>
#include<iostream>
#pragma warning(disable:4996)
using namespace std;

int N, M; //세로, 가로

int map[4][4] = {};
int status[4][4] = {};

int m = 0;


int calc()
{
	//세로
	int col_sum = 0;
	int row_sum = 0;
	
	for (int i = N-1; i >= 0; i--)
	{
		int pos = 1;
		for (int j = M-1; j >= 0; j--)
		{
			if (status[i][j])
			{
				row_sum += map[i][j] * pos;
				pos *= 10;
			}
			else
			{
				pos = 1;
			}

		}
	}

	for (int j = M - 1; j >= 0; j--)
	{
		int pos = 1;
		for (int i = N - 1; i >= 0; i--)
		{
			if (!status[i][j])
			{
				col_sum += map[i][j] * pos;
				pos *= 10;
			}
			else
			{
				pos = 1;
			}

		}
	}
	//가로
	return row_sum + col_sum;
}


int main()
{
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf("%1d", &map[i][j]);
		}
	}
	int m = 0;

	for (int i = 0; i < (1 << N * M); i++)
	{
		int tmp = i;
		for (int j = 0; j < N*M; j++)
		{
			status[j % N][j / N] = tmp % 2;
			tmp /= 2;
		}
		int res = calc();
		if (m < res)
			m = res;
	}

	cout << m << endl;
	return 0;
}