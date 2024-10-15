#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long poww(long long n,long long k)
{
	if(k==0) return 1;
	long long x=poww(n,k/2);
	if(k%2==0) return (x*x)%mod;
	else return (n*(x*x%mod))%mod;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long k=0;
		long long tmp;
		tmp=n;
		while(tmp>0)
		{
			k=k*10+tmp%10;
			tmp=tmp/10;
		}
		cout<<poww(n,k)<<endl;
	}
}