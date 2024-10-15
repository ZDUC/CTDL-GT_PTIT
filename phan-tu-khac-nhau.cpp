#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,ds,check=0;
		cin>>n;
		long long m[n],k[n-1];
		for(long long i=0;i<n;i++)
		{
			cin>>m[i];
		}
		for(long long i=0;i<n-1;i++)
		{
			cin>>k[i];
			if(k[i]!=m[i]&&check==0)
			{
				ds=i+1;
				check=1;
			}
		}
		cout<<ds<<endl;	
	}
}