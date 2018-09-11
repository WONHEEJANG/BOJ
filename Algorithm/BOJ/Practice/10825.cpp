#include<iostream>
#include<algorithm>
#include<string>
#include<tuple>
using namespace std;


struct student
{
	string name;
	int kor;
	int eng;
	int math;
};

student p[100000] = {};
/*
bool cmp(student a, student b)
{
	if (a.kor > b.kor)
	{
		return true;
	}
	else if (a.kor == b.kor)
	{
		if (a.eng < b.eng)
		{
			return true;
		}
		else if (a.eng == b.eng)
		{
			if (a.math > b.math)
			{
				return true;
			}
			else if (a.math == b.math)
			{
				if (a.name < b.name)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			return false;
		}
		return false;
	}
	return false;
}*/

bool cmp(student u, student v)
{
	return make_tuple(-u.kor,u.eng,-u.math,u.name) < make_tuple(-v.kor, v.eng, -v.math, v.name);
}

int main()
{
	int N;
	cin >> N;



	for (int i = 0; i < N; i++)
	{
		cin >> p[i].name >> p[i].kor >> p[i].eng >> p[i].math;
	}

	sort(p, p + N, cmp);

	for (int i = 0; i < N; i++)
	{
		cout << p[i].name <<  "\n";
	}

	system("pause");




	return 0;
}
