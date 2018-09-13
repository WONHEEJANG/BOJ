#include<iostream>
#include<string>
using namespace std;

int main()
{
	string B;
	int N;
	int res = 0;

	cin >> B >> N;

	int pos = 1;
	for (int i = B.size(); i > 0; i --)
	{
		int val;
		if (B[i-1] >= 'A' && B[i-1] <= 'Z')
		{
			val = B[i-1] - 55;
		}
		else if (B[i-1] >= '0' && B[i-1] <= '9')
		{
			val = B[i-1] - 48;
		}
		res = res + pos * val;
		pos = pos * N;
	}
	cout << res << endl;
	system("pause");
	return 0;
}