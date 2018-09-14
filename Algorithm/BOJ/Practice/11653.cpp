#include<iostream>
using namespace std;

int main()
{
	long long N;
	
	cin >> N;
	int cnt = N;

	for (int i = 2; i <= N; i++)
	{
		while (cnt % i == 0)
		{
			cnt = cnt / i;
			cout << i << "\n";
		}
	}
	system("pause");
	return 0;
}