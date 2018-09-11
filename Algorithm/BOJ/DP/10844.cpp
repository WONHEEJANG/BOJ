#include<iostream>
using namespace std;


int dp[10][100] = { 0 };

int stair(int N, int idx) // N은 시작 숫자 ,idx 는 자릿수 , 1,2   0,1 + 2,1     =>  1 2
{
	if (idx == 1) 
	{
		if (N == 0)
		{
			return dp[N][idx] = 1;
		}
		else if (N == 9)
		{
			return dp[N][idx] = 1;
		}
		else
			return dp[N][idx] = 2;
	}
	if (dp[N][idx] > 0)
	{
		return dp[N][idx] % 1000000000;
	}
	else
	{
		if (N == 0)
		{
			return dp[N][idx] = stair(N + 1, idx - 1) % 1000000000;
		}
		else if (N == 9)
		{
			return dp[N][idx] = stair(N - 1, idx - 1) % 1000000000;
		}
		else
			return dp[N][idx] = (((stair(N - 1, idx - 1)) % 1000000000) + ((stair(N + 1, idx - 1)) % 1000000000)) % 1000000000;
	}
} 
// 8 2 -> 7,1 9,1
// 1 2 -> 0,1 + 2,1 == > 3
// 9 2 -> 8,1  ==> 2
int main()
{
	// 0이면 1개 but 맨 앞수는 0이 올수 없음
	// 1~8 면 2개
	// 9 면 1개

	int length;
	int sum = 0;
	cin >> length;
	
	if (length == 1)
	{
		cout << 9 << endl;
	}
	else
	{
		for (int i = 1; i < 10; i++)
		{
			sum = (sum + stair(i, length - 1)) % 1000000000;
//			sum = sum + (dp[i][length - 1]) % 1000000000;

		}
		cout << sum  << endl;
	}
	system("pause");
	return 0;
}

//   0
// 1    1
//========
// 1    1
//   2
//      3

//     0
//   1
// 2   2
//=========
// 2   2
//   3
//     4
/*
28 + 3 + 2  // 33
101 121 123 
210 212 232 234 //4
321 323 343 345 //4
4//4
5//4
6//4
7//4
8//4
878 876 898 
989 987
*/