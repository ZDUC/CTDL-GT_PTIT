#include <bits/stdc++.h>

using namespace std;

int v, u;
int a[1001][1001], check[1001];

void input()
{
	cin>>v;
	for (int i=1;i<=v;i++)
	{
		for (int j=1;j<=v;j++)
			cin>>a[i][j];
	}
	cin>>u;
}

void dfs(int u)
{
	memset(check, 0, sizeof(check));
	check[u]=1;
	for (int i=1;i<=v;i++)
	{
		if (!check[i]&&a[u][i])
			dfs(i);
	}
}

bool tplt()
{
	int res=0;
	memset(check, 0, sizeof(check));
	for (int i=1;i<=v;i++)
	{
		if (!check[i])
		{
			res++;
			dfs(i);	
		}	
	}	
	return res==1;
}

void eulerCycle(int u)
{
	
	stack<int> s;
	vector<int> ce;
	s.push(u);
	while (!s.empty())
	{
		int k=s.top();
		bool tam=false;
		for (int i=1;i<=v;i++)
		{
			if (a[k][i])
			{
				s.push(i);
				tam=true;
				a[k][i]=a[i][k]=0;
				break;
			}
		}
		if (!tam)
		{
			ce.push_back(k);
			s.pop();
		}
	}
	for (int i=ce.size()-1;i>=0;i--)
		cout<<ce[i]<<" ";
}

int main()
{
	input();
	eulerCycle(u);
}