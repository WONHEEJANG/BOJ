
#include<stdio.h>
#include<math.h>

int main()
{
	int N;
	
	scanf("%d",&N);
	
	int* arr = new int[N];

	for (int i = 0; i < N; i++)
	{
		scanf("%1d", arr + i);
	}
	
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum = sum + arr[i];
	}
	printf("%d", sum);

	return 0;
}