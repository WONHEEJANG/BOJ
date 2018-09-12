#include<iostream>
#include<string>
using namespace std;

int arr[10010] = {};

int main()
{
	int T; 
	string input;
	int push,start = 0,end = -1;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> input;

		if (input == "push")
		{
			cin >> push;
			
			end++;
			arr[end] = push;
		}
		else if (input == "pop")
		{
			if (start > end)
			{
				cout << -1 << endl;
			}
			else
			{
				cout << arr[start] << endl;
				start = start + 1;
			}
		}
		else if (input == "size")
		{
			cout << end - start + 1 << endl;
		}
		else if (input == "empty")
		{
			if (start > end)
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
		else if (input == "front")
		{
			if (start > end)
			{
				cout << -1 << endl;
			}
			else
			{
				cout << arr[start] << endl;
			}
		}
		else if (input == "back")
		{
			if (start > end)
			{
				cout << -1 << endl;
			}
			else
			{
				cout << arr[end] << endl;
			}
		}
	}
	
	system("pause");

	return 0;
}