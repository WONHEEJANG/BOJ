#include<iostream>
#include<vector>
using namespace std;

long long N, S;
vector<long long> v;
vector<long long> p;

int main()
{
	cin >> N >> S;

	int tmp;

	for (int i = 0; i < N; i++)
	{
		cin >> tmp;
		v.push_back(tmp);
	}
	int pick = 100000;
	int flag = 1;
	int m;


	for (int i = 0; i < N; i++) // 10¸¸
	{
		if (i != 0)
			p.push_back(p[i - 1] + v[i]);
		else
			p.push_back(v[i]);
		if (p[i] >= S && flag)
		{
			pick = i;
			flag = 0;
		}
	}

	m = pick + 1;
	
	if (m == 100001)
	{
		cout << 0 << endl;
		return 0;
	}

	for (int i = pick; i < N; i++)
	{
		while (p[i] - p[i - m + 1] >= S)
			m--;
	}

	cout << m << endl;
	return 0;
}