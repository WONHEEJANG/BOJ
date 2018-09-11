#include<iostream>
using namespace std;

int main()
{
	int sum = 0;
	int N;
	cin >> N;

	for(int i = 0 ; i <N; i++)
	{
		sum = sum + i + 1;
	}

	cout << sum << endl;

	system("pause");
	return 0;
}