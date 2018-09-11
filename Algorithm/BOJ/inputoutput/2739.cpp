#include<stdio.h>
#pragma warning(disable:4996)
#include<windows.h>
int main()
{
	int N; 

	scanf("%d", &N);

	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", N, i, N*i);
	}
	system("pause");
	return 0;
}