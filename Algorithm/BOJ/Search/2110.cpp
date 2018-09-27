#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int N, C;
vector<long long> h;
int main()
{
	cin >> N >> C;

	long long home;

	for (int i = 0; i < N; i++)
	{
		cin >> home;
		h.push_back(home);
	}
	sort(h.begin(), h.end());

	long long l = h[0], r = h[h.size() - 1], mid;
	long long cnt;
	long long prev;

	while (l <= r)
	{
		mid = (l + r) / 2;
		prev = 0;
		cnt = 1;
		for (int i = 1; i < h.size(); i++)
		{
			if (h[i] - h[prev] >= mid)
			{
				cnt++;
				prev = i;
			}
		}
		if (cnt < C)
			r = mid - 1;
		else
			l = mid + 1;
	}
	cout << r << "\n";
	system("pause");
	return 0;
}