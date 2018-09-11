#include<iostream>
#include<algorithm>
#include<stack>
#include<string>
using namespace std;

int main()
{
	int T;
	string input;
	
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		stack<int> arr;
		int cnt = 0;
		cin >> input;
			
		for (string::iterator it = input.begin();it!=input.end();it++)
		{
			if (*it == '(')
			{
				arr.push(1);
				cnt++;
			}
			else if (*it == ')')
			{
				if (cnt > 0)
				{
					arr.pop();
				}
				cnt--;
			}
		}
		if (arr.size() == 0 && cnt == 0)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}

	system("pause");
	return 0;
}