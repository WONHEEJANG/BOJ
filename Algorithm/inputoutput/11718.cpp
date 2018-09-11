#include<iostream>>
#include<string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	string a;

	while (getline(cin,a))
	{
		cout << a << endl;
	}
	
	return 0;
}