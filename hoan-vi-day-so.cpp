#include <bits/stdc++.h>
using namespace std;
int n,m[20],a[20],b[20];
void in()
{
	for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	cout<<endl;
}
void quaylui(int i)
{
	int j;
	for(int o=0;o<n;o++)
	{
		j=m[o];
		if(b[j]==0)
		{
			a[i]=j;b[j]=1;
			if(i==n) in();
			else quaylui(i+1);
			b[j]=0;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	sort(m,m+n);
	quaylui(1);
}