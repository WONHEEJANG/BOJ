#include<iostream>
using namespace std;

int arr[26] = {};

int main()
{
	int A, B, m;
	cin >> A >> B >> m;
	int val = 0;
	int pos = 1;

	for (int i = 1; i < m; i++)
	{
		pos = pos * A;
	}
	for (int i = 0; i < m; i++)
	{
		int temp;
		cin >> temp;
		val = val + pos * temp;
		pos = pos / A;
	}
	int cnt = 0;
	while (val != 0)
	{
		arr[cnt] = val % B;
		val = val / B;
		cnt++;
	}
	for (cnt; cnt > 0; cnt--)
	{
		cout << arr[cnt-1] << " ";
	}
	system("pause");
	return 0;
}