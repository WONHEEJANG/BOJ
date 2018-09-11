#pragma warning (disable:4996)
#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
	int calender[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31 };
	string yoyil[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN" };
	int x, y;

	scanf("%d%d", &x, &y);
	//6 15
	
	int month = x - 1;
	int day = y;
	// 1 9 까지 차이 8일 화

	for (int i = 0; i <= x - 1; i++)
	{
		day = day + calender[i];
	}
	int idx = (day % 7) - 1;
	if (idx == -1)
	{
		idx = 6;
	}

	cout << yoyil[idx] << endl;

	system("pause");
	return 0;
}