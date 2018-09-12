#include<iostream>
#include<list>
#include<string>
using namespace std;

list<char> arr;

int main()
{
	string input;

	cin >> input;

	for (int i = 0; i <= input.size(); i++)
	{
		if (i == 0)
		{
			arr.push_back(' ');
		}
		else 
		{
			arr.push_back(input[i-1]);
		}
	}

	int N;
	cin >> N;
	char option;
	
	list<char>::iterator cursor = arr.end();

	char push;
	cursor--;
	for (int i = 0; i < N; i++)
	{
		cin >> option;
		if (option == 'L')
		{
			if (cursor != arr.begin())
			{
				cursor--;
			}
		}
		else if (option == 'D')
		{
			if (cursor != --arr.end())
			{
				cursor++;
			}
		}
		else if (option == 'B')
		{
			if (cursor != arr.begin())
			{
				arr.erase(cursor--);
			}
		}
		else if (option == 'P')
		{
			cin >> push;
			if (cursor == --arr.end())
			{
				arr.push_back(push);
				cursor++;
			}
			else
			{
				arr.insert(++cursor, push);
				cursor--;
			}
		}
	}

	for (cursor = ++arr.begin(); cursor != arr.end(); cursor++)
	{
		cout << *cursor;
	}
	system("pause");
	return 0;
}