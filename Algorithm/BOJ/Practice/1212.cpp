#include<iostream>
#include<string>
using namespace std;
int arr[1000010] = {};

int main()
{
	string input;

	cin >> input;
	
	if (input == "0")
	{
		cout << 0 << endl;
		return 0;
	}
	int arr[3] = {};
	int flag = 0;

	for (int i = 0; i < input.size(); i++)
	{
		int temp = input[i] - 48;

		for (int j = 2; j >= 0; j--)
		{	
			arr[j] = temp % 2;
			temp = temp / 2;
		}
		for (int k = 0; k < 3; k++)
		{
			if (arr[k] != 0)
			{
				flag++;
			}
			if (flag != 0)
			{
				cout << arr[k];
			}
		}
	}
	system("pause");
	return 0;
}