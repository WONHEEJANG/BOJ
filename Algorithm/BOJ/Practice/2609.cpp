#include<iostream>
using namespace std;

int main()
{
	int A , B;

	cin >> A >> B;

	int big,small;
	if (A > B)
	{
		big = A;
		small = B;
	}
	else
	{
		small = A;
		big = B;
	}

	for (int i = small; i >= 1; i--)
	{
		if (A%i == 0 && B%i == 0)
		{
			cout << i << endl; // �ִ�����
			break;
		}
	}

	for (int i = 1; i <=small; i++)
	{
		if (big*i% small== 0)
		{
			cout << big*i << endl; // �ּҰ����
			break;
		}
	}

	system("pause");
	return 0;
}