#include<iostream>>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);

	int A, B, T;

	cin >> T;

	for (int i = 0 ; i < T; i++)
	{
		cin >> A >> B;
		cout << "Case #" << i+1 << ": " << A <<" + " << B <<" = "<< A + B << endl;
	}
	return 0;
}