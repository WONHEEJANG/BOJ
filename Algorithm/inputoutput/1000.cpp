#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	
	int A, B;

	cin >> A >> B;

	while (1)
	{
		if (A > 0 && A < 10 && B > 0 && B < 10)
		{
			cout << A + B << endl;
			break;
		}
		else
		{
			cin >> A >> B;
		}
	}
	return 0;
}