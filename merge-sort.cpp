#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long m[n];
		for(long i=0;i<n;i++)
		{
			cin>>m[i];
		}
		sort(m,m+n);
		for(long i=0;i<n;i++)
		{
			cout<<m[i]<<" ";
		}
		cout<<endl;
	}
}