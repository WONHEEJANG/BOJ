#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

struct person
{
	int age;
	string name;

};
bool cmp(const person &u,const person &v)
{
	return u.age < v.age;
}



person p[100000] = {};

int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> p[i].age >> p[i].name;
	}

	stable_sort(p, p + N,cmp);

	for (int i = 0; i < N; i++)
	{
		cout << p[i].age << " " << p[i].name << "\n";
	}
	system("pause");
	return 0;
}