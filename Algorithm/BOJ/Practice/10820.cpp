#include<iostream>
#include<string>
using namespace std;


int main()
{
	string input[101];
	
	int i = 0;
	while(getline(cin,input[i]))
	{
		int small = 0;
		int big = 0;
		int num = 0;
		int space = 0;

		for (string::iterator it = input[i].begin(); it != input[i].end(); it++)
		{
			if (int(*it) >= 97 && int(*it) <= 122)
			{
				small++;
			}
			else if (int(*it) >= 65 && int(*it) <= 90)
			{
				big++;
			}
			else if (int(*it) >= 48 && int(*it) <= 57)
			{
				num++;
			}
			else if (int(*it) == 32)
			{
				space++;
			}
		}
		if (small == 0 && big == 0 && num == 0 && space == 0)
		{
			break;
		}
		cout << small << " " << big << " " << num << " " << space << "\n";
	}
	
	system("pause");
	return 0;
}