#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int dem=n;
	int a[n];
	vector<int> v;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n - 1; i++)
	{
		int k = i;
		for (int j = i + 1; j < n; j++)
			if (a[j] < a[k])
				k = j;
		swap(a[k], a[i]);
		for (int j = 0; j < n; j++)
		{
			v.push_back(a[j]);
		}
	}
	int m=v.size();
	int l=m-n;
	while(l>=0)
	{
		cout<<"Buoc "<<dem-1<<": ";
		dem--;
		for(int i=l;i<m;i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
		l=l-n;
		m=m-n;
	}
}