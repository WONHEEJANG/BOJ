#include<iostream>
using namespace std;

int main()
{
	long long N;
	long long pos = 1;
	long long cnt = 0;

	long long res = 0;

	cin >> N;

	long long temp = N;

	if (N / 10 > 0)
	{
		while (temp >= 1)
		{
			temp /= 10;
			cnt++;
		}
		for (int i = 1; i < cnt; i++)
		{
			pos *= 10;
		}
		res = (N - pos + 1) * cnt;

		cnt--;

		while (cnt > 0)
		{
			res = res + (pos - pos / 10) * cnt;
			cnt--;
			pos /= 10;
		}

		cout << res << endl;
	}
	else
	{
		cout << N << endl;
	}
	return 0;
}