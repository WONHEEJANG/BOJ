#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

vector<char> letters;
vector<string> words;


int main()
{
	int N;

	cin >> N;

	string temp;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		words.push_back(temp);
		
		for (int i = 0; i < temp.size(); i++)
		{
			letters.push_back(temp[i]);
		}
	}

	sort(letters.begin(), letters.end());
	letters.erase(unique(letters.begin(), letters.end()),letters.end());

	vector<int> t;
	long long m = 0;
	long long sum = 0;
	int pos;
	int s = letters.size();
	for (int i = 9; i > 9 - s; i--)
	{
		t.push_back(i);
	}

	for (int i = 0; i < words.size(); i++) // GCF
	{
		pos = 1;
		for(int k = 1 ; k < words[i].size(); k ++) // size 3
		{
			pos *= 10; // 100
		}
		for (int j = 0; j < words[i].size(); j++)
		{
			sum = sum + t[int((words[i])[j]) - 65] * pos;
			pos /= 10;
		}
	}
	m = sum;
	while (prev_permutation(t.begin(), t.end()))
	{
		sum = 0;
		for (int i = 0; i < words.size(); i++) // GCF
		{
			pos = 1;
			for (int k = 1; k < words[i].size(); k++) // size 3
			{
				pos *= 10; // 100
			}
			for (int j = 0; j < words[i].size(); j++)
			{
				sum = sum + t[int((words[i])[j]) - 65] * pos;
				pos /= 10;
			}
		}
		if(m < sum)
			m = sum;
	}

	cout << m << endl;


	return 0;
}