#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie();

	int A, B;
	
	
	while (cin >> A)
	{
		cin >> B;
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