#include<iostream>
#include<algorithm>
using namespace std;

int cnt[10010];

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp = 0;
		cin >> temp;
		cnt[temp] = cnt[temp] + 1;
	}

	
	for (int i = 1; i <= 10000; i++)
	{
		if (cnt[i] > 0)
		{
			for (int j = 0; j < cnt[i]; j++)
			{
				cout << i << "\n";
			}
		}
	}

	system("pause");
	return 0;
}
