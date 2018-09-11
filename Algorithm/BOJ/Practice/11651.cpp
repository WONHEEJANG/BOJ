#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	int N;
	cin >> N;

	vector<pair<int, int>> p(N);

	for (int i = 0; i < N; i++)
	{
		cin >> p[i].second >> p[i].first;
	}

	sort(p.begin(), p.end());

	for (int i = 0; i < N; i++)
	{
		cout << p[i].second <<" "<< p[i].first << "\n";
	}

	return 0;
}