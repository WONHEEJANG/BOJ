#include<iostream>
using namespace std;
char arr[36];
int res[40];

int main()
{
	long long N;
	int B;

	cin >> N >> B;
	
	for (int i = 0; i < 10; i++)
	{
		arr[i] = char(i+48);
	}
	for (int i = 10; i < 36; i++)
	{
		arr[i] = char(i + 55);
	}

	int cnt = 0;
	for (int i = 0; N!=0; i++)
	{
		res[i] = N % B;
		N = N / B;
		cnt++;
	}
	for (cnt; cnt > 0; cnt--)
	{
		cout << arr[res[cnt-1]];
	}
	system("pause");
	return 0;
}