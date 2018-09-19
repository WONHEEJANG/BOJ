#include<iostream>
#include<list>
using namespace std;
list<int> v;

int main()
{
	int A , P, flag = 0;
	cin >> A >> P;
	int cnt = 0;
	int sum;
	int ans = 10000;
	v.push_back(A);

	while (1)
	{
		if(cnt != 0)
			A = sum;
		sum = 0;
		while (A != 0)
		{
			int pos = A % 10;
			A = A / 10;
			int tmp = 1;
			for (int i = 0; i < P; i++)
				tmp = tmp * pos;
			sum = sum + tmp;
			cnt++;
		}
		
		for (list<int>::iterator it = v.begin(); it !=v.end();it++)
		{
			if (*it == sum)
			{
				v.erase(it);
				flag = 1; // 반복 등장
				break;
			}
		}

		if (!flag)
		{
			v.push_back(sum);
		}
		else
		{
			if (ans > v.size())
				ans = v.size();
			else if (ans == v.size())
			{
				cout << ans << "\n";
				system("pause");
				return 0;
			}
		}
	}
	system("pause");
	return 0;
}