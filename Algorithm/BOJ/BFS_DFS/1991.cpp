#include<iostream>
using namespace std;

int N;
char i1, i2, i3;
int arr[27][2];

void preorder(int node) //노드 left right
{
	if (node == -1)
		return;
	cout << char(node + 'A');
	preorder(arr[node][0]);
	preorder(arr[node][1]);
}
void inorder(int node) //노드 left right
{
	if (node == -1)
		return;
	inorder(arr[node][0]);
	cout << char(node + 'A');
	inorder(arr[node][1]);
}
void postorder(int node) //노드 left right
{
	if (node == -1)
		return;
	postorder(arr[node][0]);
	postorder(arr[node][1]);
	cout << char(node + 'A');
	return;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N; 

	for (int i = 0; i < N; i++)
	{
		cin >> i1 >> i2 >> i3;
	
		if (i2 == '.')
			arr[int(i1 - 'A')][0] = -1;
		else
			arr[int(i1 - 'A')][0] = int(i2 - 'A');
		if (i3 == '.')
			arr[int(i1 - 'A')][1] = -1;
		else
			arr[int(i1 - 'A')][1] = int(i3 - 'A');

	}
	preorder(0);
	cout << "\n";
	inorder(0);
	cout << "\n";
	postorder(0);
	cout << "\n";

	system("pause");
	return 0;
}