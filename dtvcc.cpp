#include<bits/stdc++.h>
using namespace std;
int dcc=0,t=1;
bitset<10001> check;
vector<vector<int>> a(10001);
int tren[10001]={},duoi[10001]={},cheo[10001]={};
set<int> dt;
void dfs(int n)
{
	int d=0;
	check[n]=1;
	tren[n]=duoi[n]=t++;
	for(int &i: a[n])
	{
		if(!check[i])
		{
			d++;
			cheo[i]=n;
			dfs(i);
			duoi[n]=min(duoi[n],duoi[i]);
			if(duoi[i]>tren[n]) dcc++;
			if(duoi[i]>=tren[n]&&duoi[i]>=cheo[n]) dt.insert(n);	
		}
		else if(i!=cheo[n]) duoi[n]=min(duoi[n],tren[i]);
	}
	if(d>1&& d!=cheo[n]) dt.insert(n);
}
int main()
{
		int u,m,x,y;
		cin>>u>>m;
		while(m--)
		{
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		
		for(int i=1;i<=u;i++)
		{
			if(!check[i]) dfs(i);
		}
		cout<<dt.size()<<" "<<dcc;
	
}