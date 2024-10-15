#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long m,n=0,k;
		cin>>m;
		long long a[m],b[m-1];
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<m-1;i++)
		{
			cin>>b[i];
			if(b[i]!=a[i]&&n==0)
			{
				k=i+1;
				n=1;
			}
		}
		cout<<k<<endl;
	}
}