#include<iostream>
#include<string>
using namespace std;

int broken[10] = {};

int main()
{
	int target;
	int N;
	cin >> target;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		broken[temp] = 1;
	}

	int d = 1000000;
	string now;
	string real;

	for (int i = 0; i < 1000000; i++)
	{
		int flag = 1;
		now = to_string(i);
		//broken check
		for (int j = 0; j < now.size(); j++)
		{
			if (broken[int(now[j]) - 48])
			{
				flag = 0;
				break;
			}
		}
		//calculate distance
		if (flag)
		{
			if (d > abs(target - i))
			{
				d = abs(target - i);
				real = now;
			}
			else
				break;
		}
	}
	int cnt = real.size() + d;

	if (abs(100 - target) > cnt)
		cout << cnt << endl;
	else
		cout << abs(100 - target) << endl;

	return 0;
}