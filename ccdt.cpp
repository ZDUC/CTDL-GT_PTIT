#include<bits/stdc++.h>
using namespace std;
int n,m,f[1000];
vector<int> a[501];
void bfs(int u)
{
	queue<int> q;
	q.push(u);
	f[u]=1;
	while(q.size())
	{
		int u=q.front();
		q.pop();
		for(int i=0;i<a[u].size();i++)
		{
			int v=a[u][i];
			if(f[v]==0)
			{
				f[v]=1;
				q.push(v);
			}
		}
	}
}
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			a[i].clear();
		}
		for(int i=1;i<=m;i++)
		{
			int x,y;
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		int o=1,p=0;
		for(int i=1;i<=n;i++)
		{
			memset(f,0,sizeof(f));
			f[i]=1;
			int tam=0;
			for(int j=1;j<=n;j++)
			{
				if(f[j]==0)
				{
					tam++;
					bfs(j);
				}
			}
			if(tam>o)
			{
				o=tam;
				p=i;
			}
		}
		cout<<p<<endl;
	}
}