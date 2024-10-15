#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, q;
	cin >> n >> q;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		a[i] = 0;
	}
	while(q--)
	{
		int x, y;
		cin >> x >> y;
		for(int i =x - 1; i < y; i++)
		{
			a[i]++;
		}
		
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 0)
		{
			cout << 0 << " ";
		}
		else if(a[i] % 2 == 1)
		{
			cout << 1 << " ";
		}
		else
			{
				cout << 0 << " ";
			}
			
	}
	
}