#include<bits/stdc++.h>
using namespace std;
int V,u,q,check[1000]={0};
int a[1000][1000]={0},m[15][15]={0};
void dfs(int u)
{
	stack<int>s;
	check[u]=1;
	s.push(u);
	while(!s.empty()){
		int k=s.top();
		s.pop();
		for(int i=1;i<=V;i++)
		{
			if(a[k][i]==1 && check[i]==0)
			{
				check[i]=1;
				s.push(k);
				s.push(i);
				m[k][i]==1;
				break;
			}
		}
	}
}
void process()
{
	cin>>V;
	for(int i=1;i<=V;i++)
	{
		for(int j=1;j<=V;j++)
		{
			cin>>a[i][j];
		}
	}
	cin>>q;
	dfs(q);
	for(int i=1;i<=V;i++)
	{
		for(int j=1;j<=V;j++)
		{
			if(m[i][j]==1)
			{
				cout<<i<<" "<<j<<endl;
			}
		}
	}

}
int main()
{
	process();	
}