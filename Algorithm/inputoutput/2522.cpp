#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = N; i >= 0; i--)
	{
		if (i != N && i != 0)
		{
			for (int j = 0; j < i; j++)
			{
				cout << " ";
			}

			for (int j = 0; j < (N - i); j++)
			{
				cout << "*";
			}

			cout << endl;


		}
	}
	for (int i = 0; i <= N; i++)
	{
		if (i != N)
		{
			for (int j = 0; j < i; j++)
			{
				cout << " ";
			}

			for (int j = 0; j < N - i; j++)
			{
				cout << "*";
			}

			cout << endl;
		}
	}
	system("pause");
	return 0;
}