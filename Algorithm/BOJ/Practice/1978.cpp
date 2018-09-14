#include<iostream>
using namespace std;
bool prime(int N)
{
	if (N == 1)
		return false;
	else if (N == 2)
		return true;
	for (int i = N - 1; i >= 2 ;i--)
	{
		if (N % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int N, input, cnt = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		if (prime(input))
		{
			cnt++;
		}
	}
	cout << cnt << endl;
	system("pause");
	return 0;
}