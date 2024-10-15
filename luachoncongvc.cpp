#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int arr[n + 1][m + 1];
	int a[n + 1], c[n + 1];
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i] >> c[i];
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(a[i] <= j)
			{
				arr[i][j] = max({arr[i - 1][j - a[i]] + c[i], arr[i - 1][j]});
			}
			else
			{
				arr[i][j] = arr[i - 1][j];
			}
		}
	}	
	cout << arr[n][m];
}