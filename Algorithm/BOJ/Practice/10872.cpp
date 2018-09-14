#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	long long res = 1;

	for (int i = 1; i <= N; i++)
	{
		res = res * i;
	}

	cout << res << endl;

	return 0;
}