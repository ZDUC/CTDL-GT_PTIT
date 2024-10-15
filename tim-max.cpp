#include <bits/stdc++.h>
using namespace std;
long long d=1e9+7;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,ds=0;
		cin>>n;
		long long m[n];
		for(long long i=0;i<n;i++)
		{
			cin>>m[i];
		}
		sort(m,m+n);
		for(long long i=0;i<n;i++)
		{
			ds=(m[i]*i+ds)%d;
		}
		cout<<ds<<endl;
	}
}