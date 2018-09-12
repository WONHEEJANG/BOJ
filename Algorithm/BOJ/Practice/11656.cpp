#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string arr[1010] = {};

int main()
{

	string input;

	cin >> input;

	
	for (int i = 0; i < input.size(); i++)
	{
		string temp = {};

		for (string::iterator it = input.begin() + i; it != input.end(); it++)
		{
			temp = temp + *it;
		}
		arr[i] = temp;
	}

	sort(arr, arr + input.size());

	for (int i = 0; i < input.size(); i++)
	{
		cout << arr[i] << "\n";
	}


	system("pause");

	return 0;
}