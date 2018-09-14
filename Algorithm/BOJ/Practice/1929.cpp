#include<iostream>
using namespace std;
int arr[1000010] = {};

int main()
{
	ios_base::sync_with_stdio(false);
	long long M, N, input;

	cin >> M >> N;

	for (long long i = 2; i <= N/2; i++)
	{
		for (long long j = 2; j <= N/i; j++)
		{
			if(arr[i*j] == 0)
				arr[i*j] = 1;
		}
	}
	for (int k = M; k <= N; k++)
	{
		if (k == 1)
			continue;

		if (arr[k] == 0)
			cout << k << "\n";
	}
	

	system("pause");
	return 0;
}