#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	for (int i = N; i > 0; i--)
	{
		for (int j = 0; j < i - 1; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < 2*(N-i) + 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}