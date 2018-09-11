#include<iostream>
using namespace std;

int M = 1000000;

void oper(int input, int op_num) //15 , 1
{
	if (input == 1)
	{
		if (M > op_num)
		{
			M = op_num;
		}
	}
	else
	{
		if (op_num < M)
		{
			if (input % 3 == 0)
			{
				oper(input / 3, op_num + 1);
			}
			if (input % 2 == 0)
			{
				oper(input / 2, op_num + 1);
			}
			oper(input - 1, op_num + 1);
		}
	}
}

int main()
{
	int x;

	cin >> x;
	oper(x, 0);
	cout << M << endl;
	system("pause");
	
	return 0;
}