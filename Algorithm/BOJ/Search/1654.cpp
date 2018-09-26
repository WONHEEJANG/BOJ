#include<iostream>
#include<vector>
using namespace std;
vector<unsigned long long> line;
vector<unsigned long long> cnt(10001,0);
unsigned long long l, pivot;
unsigned long long sum = 0;
unsigned long long K, N, object_cnt = 0;


int main()
{
	cin >> K >> N;

	for (unsigned long long i = 0; i < K; i++)
	{
		cin >> l;
		line.push_back(l);
		sum = sum + l;
	}

	pivot = sum / N;

	for (unsigned long long i = 0; i < K; i++)
	{
		cnt[i] = line[i] / pivot;
		object_cnt += cnt[i];
	}
	
	//for (unsigned long long i = 0; i < K && object_cnt < N; i++)
	while(object_cnt < N)
	{
		object_cnt = 0;
		pivot = 0;
		for (unsigned long long j = 0; j < K; j++)
		{
			if(pivot < line[j] / (cnt[j] + 1))
				pivot = line[j] / (cnt[j] + 1);
		}
		for (unsigned long long j = 0; j < K; j++)
		{
			cnt[j] = line[j] / pivot;
			object_cnt += cnt[j];
		}
	}

	cout << pivot << "\n";


	return 0;
}