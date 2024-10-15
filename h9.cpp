#include <bits/stdc++.h>
using namespace std;
long long mod=1e9+7;
long long poww(int n,int k)
{
	if(k==1) return n%mod;
	long long x=poww(n,k/2);
	if(k%2==0) return x*x%mod;
	else return n*(x*x%mod)%mod;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		if(k==0) cout<<1<<endl;
		else cout<<poww(n,k)<<endl;
	}
}