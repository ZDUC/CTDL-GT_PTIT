#include <bits/stdc++.h>
using namespace std;
long snt(long a)
{
	if(a==1) return 0;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			return 0;
		}
	}
	return 1;
}
long stp(long a)
{
	long m=0;
	while(a>0)
	{
		long check=a%10;
		if(check==2||check==3||check==5||check==7)
		{
			a=a/10;
			m=m+check;
		}
		else return 0;
	}
	if(snt(m)==0) return 0;
	else return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,b,dem=0;
		cin>>n>>b;
		for(long long i=n;i<=b;i++)
		{
			if(snt(i)==1)
			{
				if(stp(i)==1) dem++;
			}
		}
		cout<<dem<<endl;
	}
}