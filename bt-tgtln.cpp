#include<bits/stdc++.h>
using namespace std;
int m=6000;
int main()
{
	int a[m][m],b[m],c[m];
	int n,x;
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
		cin>>c[i];
	}
	memset(a,0,sizeof(a));
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=x;j++)
		{
			a[i][j]=a[i-1][j];
			if(j>=b[i]) a[i][j]=max(a[i][j],a[i-1][j-b[i]]+c[i]);
		}
	}
	cout<<a[n][x];
}