#include<iostream>
#include<stack>
using namespace std;
int min(int a, int b) { return a > b ? b : a; }

int main()
{
	int N;
	cin >> N;
	int cnt = 0;
	int num2 = 0;
	int num5 = 0;

	for (int i = 1; i <= N; i++)
	{
		int temp = i;
		while (temp > 1)
		{
			if (temp % 10 == 0)
			{
				temp = temp / 10;
				cnt++;
			}
			else
			{
				if (temp % 2 == 0)
				{
					temp = temp / 2;
					num2++;
				}
				else if (temp % 5 == 0)
				{
					temp = temp / 5;
					num5++;
				}
				else
				{
					break;
				}
			}
		}
	}

	cnt = cnt + min(num2, num5);
	
	cout << cnt << endl;


	return 0;
}