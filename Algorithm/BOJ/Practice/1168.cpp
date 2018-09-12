#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
		arr[i] = i + 1;
	int pos = 0;
	cout << '<';
	while (arr.size()) {
		pos += m - 1;
		if (pos >= arr.size())
			pos %= arr.size();
		cout << arr[pos];
		if (arr.size() != 1)
			cout << ", ";
		else
			cout << '>';
		arr.erase(arr.begin() + pos);
	}
	cout << '\n';
	return 0;
}