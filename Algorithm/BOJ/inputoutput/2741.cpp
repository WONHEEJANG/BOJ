#pragma warning(disable: 4996)
#include<stdio.h>
#include<Windows.h>
int main()
{
	int m;

	scanf("%d", &m);
	
	for (int i = 1; i <= m; i++)
	{
		printf("%d\n", i);
	}
	system("pause");
}