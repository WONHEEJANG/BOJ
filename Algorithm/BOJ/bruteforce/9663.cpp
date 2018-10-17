#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<pair<int,int>> q;
int N;
int ans = 0;

int check_col[15] = {};
int check_dia1[40] = {};
int check_dia2[40] = {};

void go(int row)
{
	if (row == N)
		ans++;
	for (int col = 0; col < N; col++)
	{
		if (!check_col[col] && !check_dia1[row + col] && !check_dia2[N - row + col])
		{
			check_col[col] = 1;
			check_dia1[row + col] = 1;
			check_dia2[N - row + col] = 1;
			go(row + 1);
			check_col[col] = 0;
			check_dia1[row + col] = 0;
			check_dia2[N - row + col] = 0;
		}
	}
}// 9 0 - > 0, 8 0 -> 1, 9 1 -> 1

int main()
{
	cin >> N;

	go(0);
	cout << ans << endl;

	return 0;
}