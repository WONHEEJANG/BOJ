#include<stdio.h>
#include<cmath>
#pragma warning(disable:4996)
int arr[1000010] = {};
long long prime[1000000] = {};

int main()
{
	//ios_base::sync_with_stdio(false);
	long long N , input;
	
	
	for (long long i = 2; i <= 1000000; i++)
	{
		for (long long j = 2; j <= 1000000 / i; j++)
		{
			if (arr[i*j] == 0)
			{
				arr[i*j] = 1;
			}
		}
	}
	long long cnt = 0;
	for (int i = 2; i < 1000000; i++)
	{
		if (arr[i] == 0)
		{
			prime[cnt] = i;
			cnt++;
		}
	}
	while (1)
	{
		scanf("%lld", &N);
		if (N == 0)
			return 0;

		int flag = 0;
		for (int k = 1; k <= cnt; k++)
		{
			if (arr[N - prime[k]] == 0)
			{
				//cout << N << " = " << prime[k] << " + " << N - prime[k] << "\n";
				printf("%lld = %lld + %lld\n", N, prime[k], N - prime[k]);
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			printf("Goldbach's conjecture is wrong");
			//cout << "Goldbach's conjecture is wrong" << endl;
	}
	return 0;
}