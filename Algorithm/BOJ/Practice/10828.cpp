#include<iostream>
#include<string>
using namespace std;

int stack[10000] = {};



int main()
{
	int N;
	string input;
	
	int size = 0;
	
	int x;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;

		if (input == "push")
		{
			cin >> x;
			stack[size] = x;
			size++;
		}
		else if (input == "top")
		{
			if (size != 0)
			{
				cout << stack[size - 1] << "\n";
			}
			else
			{
				cout << -1 << "\n";
			}
		}
		else if (input == "size")
		{
			cout << size << "\n";
		}
		else if (input == "empty")
		{
			if (size == 0)
			{
				cout << true << "\n";
			}
			else
			{
				cout << false << "\n";
			}
		}
		else if (input == "pop")
		{
			if (size != 0)
			{
				cout << stack[size - 1] << "\n";
				stack[size - 1] = 0;
				size--;
			}
			else
			{
				cout << -1 << "\n";
			}
		}
	}

	system("pause");
	return 0;
}