#include <bits/stdc++.h>
using namespace std;
int n, dem = 1;
int check[1000] = {0}, a[1001];
void show()
{
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void bj(int k)
{
	if (k == n + 1)
	{
		show();
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (check[i] == 0)
		{
			check[i] = 1;
			a[k] = i;
			bj(k + 1);
			check[i] = 0;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		bj(1);
	}
}