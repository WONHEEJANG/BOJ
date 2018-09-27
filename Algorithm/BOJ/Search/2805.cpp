#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long N, M, input, pivot = 0, sum = 0;
vector<long long> tree;
vector<long long> cut_tree(1000001, 0);
bool cmp(long long a, long long b) { return a > b; }

long long minustozero(long long plus)
{
	if (plus < 0)
		return 0;
	else
		return plus;
}

int main()
{
	cin >> N >> M;
	for (long long i = 0; i < N; i++)
	{
		cin >> input;
		tree.push_back(input);
	}
	sort(tree.begin(), tree.end());

//	long long lb = tree[0];
	long long lb = 1;
	long long ub = tree[tree.size() - 1];

	while (lb <= ub)
	{
		pivot = (ub + lb) / 2;
		sum = 0;
		for (long long j = 0; j < N; j++)
		{
			cut_tree[j] = minustozero(tree[j] - pivot);
			sum += cut_tree[j];
		}

		if (sum < M)// 더까야됌
			ub = pivot - 1;
		else // 생각보다 많이 깠음
			lb = pivot + 1;
	}


	cout << ub << "\n";
	return 0;
}