#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		if (i != 0)
		{
			for (int j = 0; j < i; j++)
			{
				cout << "*";
			}

			for (int j = 0; j < 2 * (N - i); j++)
			{
				cout << " ";
			}

			for (int j = 0; j < i; j++)
			{
				cout << "*";
			}

			cout << endl;
		}
	}
	for (int i = N; i > 0; i--)
	{
		for (int j = 0; j < i ; j++)
		{
			cout << "*";
		}

		for (int j = 0; j < 2 * (N - i); j++)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}

		cout << endl;

	}
	system("pause");
	return 0;
}