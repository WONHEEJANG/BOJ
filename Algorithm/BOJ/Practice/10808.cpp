#include<iostream>
#include<string>
using namespace std;

int alphabet[26] = {};

int main()
{
	string input;

	cin >> input;

	for (string::iterator it = input.begin(); it != input.end(); it++)
	{
		alphabet[int(*it) - 97] ++;
	}
	
	for (int i = 0; i < 26; i++)
	{
		cout << alphabet[i] <<" ";
	}

	system("pause");

	return 0;
}