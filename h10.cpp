#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		long long a[n+1];
		a[1]=a[2]=1;
		for(int i=3;i<=n;i++)
		{
			a[i]=a[i-2]+a[i-1];
		}
		while(1)
		{
			if(n==1)
			{
				cout<<"A"<<endl;
				break;
			}
			if(n==2)
			{
				cout<<"B"<<endl;
				break;
			}
			if(k>a[n-2])
			{
				k=k-a[n-2];
				n=n-1;
			}
			else n=n-2;
		}
	}
}