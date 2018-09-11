#include<iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
	int max = -1000000;
	int min = 1000000;

	for (int i = 0; i < N; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
		if (max < arr[i])
		{
			max = arr[i];
		}
	}

	cout << min << " " << max << endl;
	system("pause");
	return 0;
}