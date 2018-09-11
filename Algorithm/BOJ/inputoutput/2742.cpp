#pragma warning(disable: 4996)
#include<stdio.h>
#include<Windows.h>
int main()
{
	int m;

	scanf("%d", &m);

	for (int i = m; i >= 1; i--)
	{
		printf("%d\n", i);
	}
	system("pause");
}