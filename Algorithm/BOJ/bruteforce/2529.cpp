#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

vector<char> unequal;

int N;

int main()
{
	cin >> N;
	char t;

	for (int i = 0; i < N; i++)
	{
		cin >> t;
		unequal.push_back(t);
	}
	int cnt1 = 0, cnt2 = 0; // cnt1 < cnt2 >
	string res = "";
	string temp = "";
	string ttemp = "";
	int m = 9;

	for (int i = 0; i < N; i++)
	{
		if ((i > 0) && (unequal[i - 1] != unequal[i]))
		{
			if (cnt1 > 0)
			{
				for (int j = m - cnt1; j <= m; j++)
				{
					res += to_string(j);
				}
				m = m - cnt1 - 1;
			}
			if (cnt2 > 0)
			{
				for (int j = m; j > m - cnt2 + 1; j--)
				{
					res += to_string(j);
				}
				m = m - cnt2 + 1;
			}

			cnt1 = 0;
			cnt2 = 0;
		}

		if (unequal[i] == '<')
		{
			cnt1++;
		}
		else
		{
			cnt2++;
		}

	}
	cout << res << endl;



	return 0;
}
