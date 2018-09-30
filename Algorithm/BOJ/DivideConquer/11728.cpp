#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N, M;
	vector<int> arr1;
	vector<int> arr2;
	vector<int> ans;

	cin >> N >> M;
	
	int input;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		arr1.push_back(input);
	}
	for (int i = 0; i < M; i++)
	{
		cin >> input;
		arr2.push_back(input);
	}

	int idx1 = 0, idx2 = 0;

	while (idx1 < arr1.size() && idx2 < arr2.size())
	{
		if (arr1[idx1] > arr2[idx2])
		{
			ans.push_back(arr2[idx2]);
			idx2++;
		}
		else
		{
			ans.push_back(arr1[idx1]);
			idx1++;
		}
	}
	for (int i = idx1; i < arr1.size(); i++)
	{
		ans.push_back(arr1[i]);
	}
	for (int i = idx2; i < arr2.size(); i++)
	{
		ans.push_back(arr2[i]);
	}


	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}

	system("pause");
	return 0;
}