#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		long m[a],n[b];
		for(long i=0;i<a;i++)
		{
			cin>>m[i];
		}
		for(long i=0;i<b;i++)
		{
			cin>>n[i];
		}
		sort(m,m+a);
		sort(n,n+b);
		long long ds=m[a-1]*n[0];
		cout<<ds<<endl;
	}
}