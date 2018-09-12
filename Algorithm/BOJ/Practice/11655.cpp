#include<iostream>
#include<string>
using namespace std;

int main()
{
	string input;

	getline(cin, input);
	for (int i = 0; i < input.size(); i ++)
	{
		if ((input[i]) >= 'a' && input[i] <= 'z')
		{
			if ((input[i] + 13) > 'z')
			{
				input[i] = char('a' + 12 - ('z' - input[i]));
			}
			else
			{
				input[i] = char(input[i] + 13);
			}
		}
		else if ((input[i]) >= 'A' && input[i] <= 'Z')
		{
			if ((input[i] + 13) > 'Z')
			{
				input[i] = char('A' + 12 - ('Z' - input[i]));
			}
			else
			{
				input[i] = char(input[i] + 13);
			}
		}
	}
	
	cout << input << endl;
	system("pause");

	return 0;
}