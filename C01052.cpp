#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin>>t;
	while(t--)
	{
		long long a;
		cin>>a;
		if(a%2!=0)
		{
			cout<<"0"<<endl;
			continue;
		}
		long long dem=1;
		for(long long i=2;i<sqrt(a);i++)
		{
			if(i%2==0&&a%i==0) dem=dem+1;
			if(a%i==0)
			{
			long long m=a/i;
			if(m%2==0) dem=dem+1;
			}
		}
		long long test=sqrt(a);
		if(test*test==a) dem++;
		cout<<dem<<endl;
	}
}