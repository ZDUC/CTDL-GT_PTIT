#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long power(int n)
{
	if(n == 0)
	{
		return 1;
	}
	long long x = power(n/2);
	if(n & 1)
	{
		return (x * x * 2)%mod;
	}
	else
	{
		return (x * x) % mod;
	}
}
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
    	int n,k;
    	cin>>n>>k;
    	long long ds,dem=k;
		long long m[n+1];
		for(int i=1;i<=min(k, n);i++)
		{
			m[i]=power(i-1);
		}
//		if(k>=n)
//		{
//			cout<<m[k]<<endl;
//			continue;
//		}
		for(int i=k+1;i<=n;i++)
		{
			m[i]=0;
			for(int j=1;j<=k;j++)
			{
				m[i]+=m[i-j];
				m[i] %= mod;
			}
		}
		cout<<m[n]<<endl;
	}
}