#include<iostream>
#include<string>
#include<list>
using namespace std;

int arr[20010] = {};

int main()
{
	int T;
	string input;
	int push, start = 10001, end = 10000;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> input;

		if (input == "push_front")
		{
			cin >> push;
			start--;
			arr[start] = push;
		}
		else if (input == "push_back")
		{
			cin >> push;
			end++;
			arr[end] = push;
		}

		else if (input == "pop_front")
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
		else if (input == "pop_back")
		{
			if (start > end)
			{
				cout << -1 << endl;
			}
			else
			{
				cout << arr[end] << endl;
				end = end - 1;
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