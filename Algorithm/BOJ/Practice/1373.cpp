#include<iostream>
#include<string>
using namespace std;
int arr[1000010] = {};

int main()
{
	string input;

	cin >> input;
	
	long long cnt = 0;
	int pos = 1;
	for (long long i = input.size(); i > 0; i--)
	{
		if (cnt % 3 == 0)
		{
			pos = 1;
		}
		arr[cnt/3] = arr[cnt/3] + ((input[i - 1]) - 48) * pos;
		
		pos = pos * 2;
		cnt++;
	}
	for (long long j = ((input.size()-1) / 3); j >= 0; j--)
	{
		cout << arr[j];
	}

	system("pause");
	return 0;
}