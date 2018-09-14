#include <iostream>
using namespace std;

int cnt2(long long int n) {
	int cnt = 0;
	for (long long int i = 2; i <= n; i *= 2)
		cnt += n / i;
	return cnt;
}

int cnt5(long long int n) {
	int cnt = 0;
	for (long long int i = 5; i <= n; i *= 5)
		cnt += n / i;
	return cnt;
}

int Min(int a, int b) { return a > b ? b : a; }

int main() {
	int n, m;
	int c2, c5;
	cin >> n >> m;
	c2 = cnt2(n) - cnt2(m) - cnt2(n - m);
	c5 = cnt5(n) - cnt5(m) - cnt5(n - m);
	cout << Min(c2, c5) << '\n';
	return 0;
}