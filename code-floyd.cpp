#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,u,v,w,i,j,k;
    int d[105][105];
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=m;j++)
    	{
    		d[i][j]=1e9;
		}
		d[i][i]=0;
	}
    while(m--)
    {
    	cin>>u>>v>>w;
    	d[u][v]=d[v][u]=w;
	}
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(d[i][j]>d[i][k]+d[k][j]) d[i][j]=d[i][k]+d[k][j];
			}
		}
	}
	cin>>t;
	while(t--)
	{
		cin>>u>>v;
		cout<<d[u][v]<<endl;
	}
}