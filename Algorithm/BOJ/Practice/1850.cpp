#include<iostream>
using namespace std;
unsigned long long max(unsigned long long a, unsigned long long b)
{
	if (a > b)
		return a;
	else
		return b;
}
unsigned long long min(unsigned long long a, unsigned long long b)
{
	if (a > b)
		return b;
	else
		return a;
}

unsigned long long gcd(unsigned long long A, unsigned long long B)
{
	unsigned long long small = max(A, B) % min(A, B);
	unsigned long long big = min(A, B);
	if (small != 0)
	{
		gcd(small, big);
	}
	else
		return min(A,B);
}

//unsigned long long int gcd(unsigned long long int a, unsigned long long int b) { return a % b == 0 ? b : gcd(b, a%b); }

int main()
{
	unsigned long long A, B;
	unsigned long long v_A = 1, v_B = 1;
	cin >> A >> B;

	unsigned long long ans;
	
	ans = gcd(A, B);
	
	
	for (int i = 0; i < ans; i++)
	{
		cout << 1;
	}
	cout << "\n";
	system("pause");

	return 0;
}