#include<iostream>
#include<stack>
#include<string>
using namespace std;

stack<int> stick;

int main()
{
	string input;
	int part = 0;

	cin >> input;

	for (string::iterator it = input.begin(); it != input.end(); it++)
	{
		if (*it == '(')
		{
			stick.push(1);
		}
		else if (*it == ')')
		{
			if (*(it - 1) == '(') // () ∑π¿Ã¿˙
			{
				if (stick.size() != 0)
				{
					stick.pop();
				}
				part = part + stick.size();
			}
			else // ))
			{
				part = part + 1;
				if (stick.size() != 0)
				{
					stick.pop();
				}
			}
		}
	}

	cout << part << endl;
	system("pause");

	return 0;
}