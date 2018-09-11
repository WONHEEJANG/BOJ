#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	int A, B, T;

	cin >> T;

	for(int i = 0; i < T; i ++)
	{
		cin >> A >> B;

		if (A > 0 && A < 10 && B > 0 && B < 10)
		{
			cout << A + B << endl;
		}
		else
		{
			cin >> A >> B;
		}
	}
	return 0;
}