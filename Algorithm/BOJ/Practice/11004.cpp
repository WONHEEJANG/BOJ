#include<iostream>
#include<algorithm>
using namespace std;

int arr[5000010] = {};

int main()
{
	ios_base::sync_with_stdio(false);
	int N, K;

	cin >> N >> K;

	K = K - 1;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	nth_element(arr, arr + K, arr + N);

	cout << arr[K] << '\n';

	
	return 0;
}