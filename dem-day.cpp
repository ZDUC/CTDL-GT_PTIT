#include <bits/stdc++.h>
using namespace std;
long long m=123456789;
long long power(long long n,long long k)
{
	if(k==1) return n;
	long long x=power(n,k/2);
	if(k%2==0) return x*x%m;
	else return n*(x*x%m)%m;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long k=n-1;
		cout<<power(2,k)<<endl;
	}
}