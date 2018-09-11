#include<iostream>
#include<algorithm>
using namespace std;
int arr[1000010] = {};

bool increasing(int a, int b)
{
	if (a < b)
	{
		return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N, increasing);

	for (int i = 1; i <= N; i++)
	{
		cout << arr[N - i] << '\n';
	}
	system("pause");

	return 0;
}
