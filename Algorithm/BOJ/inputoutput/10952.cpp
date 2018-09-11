#include<iostream>>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	char* input = new char[3];
	int T;

	cin >> T;

	for (;T>0;T--)
	{
		cin >> input;
		cout << atoi(input) + atoi(input + 2) << endl;
	}
	return 0;
}