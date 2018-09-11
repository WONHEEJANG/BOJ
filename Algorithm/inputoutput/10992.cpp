#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int j = 0; j < N-1; j++)
	{
		cout << " ";
	}
	cout << "*" << endl;


	for (int i = 0; i < N - 2; i++)
	{
		for (int j = N - 2; j > i; j--)
		{
			cout << " ";
		}
		cout << "*";
		for (int j = 0; j <= 2*i; j++)
		{
			cout << " ";
		}
		cout << "*";

		cout << endl;

	}
	if (N != 1)
	{
		for (int j = 0; j < 2 * N - 1; j++)
		{
			cout << "*";
		}
	}
	system("pause");
	return 0;
}