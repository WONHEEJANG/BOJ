#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

vector<char> unequal;
vector<int> m1;
vector<int> m2;
int N;

bool check1()
{
	for (int i = 0; i < N; i++)
	{
		if (unequal[i] == '<')
		{
			if (m1[i] > m1[i + 1])
			{
				return false;
			}
		}
		else
		{
			if (m1[i] < m1[i + 1])
			{
				return false;
			}
		}
	}
	return true;
}

bool check2()
{
	for (int i = 0; i < N; i++)
	{
		if (unequal[i] == '<')
		{
			if (m2[i] > m2[i + 1])
			{
				return false;
			}
		}
		else
		{
			if (m2[i] < m2[i + 1])
			{
				return false;
			}
		}
	}
	return true;
}


int main()
{
	cin >> N;
	char t;

	for (int i = 0; i < N; i++)
	{
		cin >> t;
		unequal.push_back(t);
	}
	for (int i = 9; i >= 9 - N; i--)
	{
		m1.push_back(i);
	}
	for (int i = 0; i <= N; i++)
	{
		m2.push_back(i);
	}

	if (check1())
	{
		for (int i = 0; i < m1.size(); i++)
		{
			cout << m1[i];
		}
		cout << endl;
	}

	while (prev_permutation(m1.begin(), m1.end()))
	{
		if (check1())
		{
			for (int i = 0; i < m1.size(); i++)
			{
				cout << m1[i];
			}
			cout << endl;
			break;
		}
	}

	if (check2())
	{
		for (int i = 0; i < m2.size(); i++)
		{
			cout << m2[i];
		}
		cout << endl;
	}

	while (next_permutation(m2.begin(), m2.end()))
	{
		if (check2())
		{
			for (int i = 0; i < m2.size(); i++)
			{
				cout << m2[i];
			}
			cout << endl;
			break;
		}
	}

	return 0;
}
