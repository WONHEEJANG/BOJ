#include<iostream>
#include<string>
using namespace std;

int arr[26] = {};

int main()
{
	string input;
	int idx = 0;

	cin >> input;

	for (int i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}
	for (string::iterator it = input.begin(); it != input.end(); it++)
	{
		if (arr[int(*it) - 97] == -1)
		{
			arr[int(*it) - 97] = idx;
		}
		idx++;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}