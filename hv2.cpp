#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,c,x,y;
	cin>>n>>c;
	long long m[n+1][n+1];
	while(c--)
	{
		cin>>x>>y;
		m[x][y]=m[y][x]=1;
	}
	int o=1;
	while(o<=n)
	{
		int dem=0;
		long long check[n+1]={0};
		check[o]=1;
		for(int i=1;i<=n;i++)
		{
			queue<long long> q;
			if(check[i]==0)
			{
				check[i]=1;
				q.push(i);
				dem++;
			}
			while(q.size())
			{
				long long k=q.front();
				q.pop();
				for(int j=1;j<=n;j++)
				{
					if(check[j]==0&&m[k][j]==1)
					{
						q.push(j);
						check[j]=1;
					}
				}
			}
				
		}
		cout<<dem<<endl;
		o++;
	}
}