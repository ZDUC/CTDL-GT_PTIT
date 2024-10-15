#include <bits/stdc++.h>
using namespace std;
int n,t,k,a[1001],c,m[1001];
void out()
{
	if(c==2) return;
	if(c==0)
	{
		for(int i=1;i<=k;i++) 
		{
			if(m[i]!=a[i]) return;
		}
		c=1;
	}
	else
	{
		for(int i=1;i<=k;i++)
		{
			cout<<a[i]<<" ";
		}
		c=2;
	}
}
void bt(int i)
{
	if(c==2) return;
	for(int j=a[i-1]+1;j<=n-k+i;j++)
	{
		a[i]=j;
		if(i==k)
		{
			out();
		}
		else bt(i+1);
	}
}
int main()
{
	cin>>t;
	while(t--)
	{
		c=0;
		cin>>n>>k;
		for(int i=1;i<=k;i++)
		{
			cin>>m[i];
		}
		bt(1);
		if(c==1)
		{
			for(int i=1;i<=k;i++)
			{
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
}