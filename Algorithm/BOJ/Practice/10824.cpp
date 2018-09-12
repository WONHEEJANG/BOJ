#include<iostream>
#include<string>
using namespace std;

int main()
{
	string front_sum;
	string rear_sum;
	long long front = 0;
	long long rear = 0;
	string a, b, c, d;

	cin >> a >> b >> c >> d;

	front_sum = a + b;
	rear_sum = c + d;

	long long pos = 1;

	for (int i = front_sum.size() - 1; i >= 0 ; i--)
	{
		front = front + (front_sum[i] - 48) * pos;
		pos = pos * 10;
	}
	pos = 1;
	for (int i = rear_sum.size() - 1; i >= 0; i--) {
		rear = rear + (rear_sum[i] - 48) * pos;
		pos = pos * 10;
	}

	cout << front + rear << endl;

	system("pause");


	return 0;
}