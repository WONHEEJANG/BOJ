#include<iostream>
#include<list>
using namespace std;

int main()
{
	int N, M;

	cin >> N >> M;

	list<int> arr;
	list<int> jose;
	for (int i = 1; i <= N; i++)
	{
		arr.push_back(i);
	}
	list<int>::iterator it = arr.begin();

	if (M == 1)
	{
		cout << "<";
		for (int j = 0; j <N; j++)
		{
			cout << *it;
			if (j != N - 1)
			{
				cout << ", ";
			}
			it++;
		}
		cout << ">";
	}
	else
	{
		for (int i = 1; i < N; i++)
		{
			for (int j = 1; j < M - 1; j++)
			{
				if (it == std::prev(arr.end(), 1))
				{
					it = arr.begin();
				}
				else
				{
					it++;
				}
			}
			if (i != 1)
			{
				if (it == std::prev(arr.end(), 1))
				{
					it = arr.begin();
				}
				else
				{
					it++;
				}
			}
			if (it == std::prev(arr.end()))
			{
				jose.push_back(*(arr.begin()));
				arr.erase(arr.begin());
			}
			else
			{
				jose.push_back(*(std::next(it, 1)));
				arr.erase(std::next(it, 1));
			}
		}
		jose.push_back(*arr.begin());

		cout << "<";
		it = jose.begin();
		for (int j = 0; j <N; j++)
		{
			cout << *it;
			if (j != N - 1)
			{
				cout << ", ";
			}
			it++;
		}
		cout << ">";

	}


	system("pause");
	return 0;
}