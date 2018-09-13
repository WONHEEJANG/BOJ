#include<iostream>
using namespace std;
int min(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;
}
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	int A, B, T;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;

		int small = min(A, B);
		int big = max(A, B);

		for (int i = 1; i <= small; i++)
		{
			if (big*i % small == 0)
			{
				cout << big * i << "\n";
				break;
			}
		}
	}

	return 0;
}