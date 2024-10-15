#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d,c,x,y,dem=0;
		cin>>d>>c;
		vector<vector<int>> a(d+2);
		int check[d+2]={0};
		while(c--)
		{
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		for(int i=1;i<=d;i++) sort(a[i].begin(),a[i].end());
		for(int i=1;i<=d;i++)
		{
			if(check[i]==0)
			{
				dem++;
				queue<int> q;
				q.push(i);
				check[i]=1;
				while(q.size())
				{
					int u=q.front();
					q.pop();
					for(int j=0;j<a[u].size();j++)
					{
						int k=a[u][j];
						if(check[k]==0)
						{
							q.push(k);
							check[k]=1;
						}
					}
				}
			}
		}
		cout<<dem<<endl;
	}
}