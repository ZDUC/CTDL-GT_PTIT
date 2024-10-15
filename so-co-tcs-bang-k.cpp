#include <bits/stdc++.h>
using namespace std;
long long f[105][50005]={0},m=1e9+7;
void tinh()
{
	int i,j,k;
	for(i=1;i<10;i++) f[1][i]=1;
	for(i=1;i<=100;i++)
	{
		for(j=1;j<=50000;j++)
		{
			for(k=0;k<=9;k++)
			{
				if(k<=j)
					f[i][j]=(f[i][j]+f[i-1][j-k])%m;
				else break;
			}
		}
	}
}
main()
{
	int t;
	cin>>t;
	tinh();
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		cout<<f[n][k]<<endl;
	}
}