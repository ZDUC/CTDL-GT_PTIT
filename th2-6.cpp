#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, u, x, y;
    cin>>n>>m;
    vector<vector<int>> a(n + 1);
    while(m--)
    {
    	cin>>x>>y;
    	a[x].push_back(y);
	}
	for (int i = 1; i <= n; i++) sort(a[i].begin(), a[i].end());
	int cs=1;
	int ds=1000;
	while(cs<=n){
		int check[n+1]={0};
		int dem=0;
		u=cs;
		int k=0;
		while(u<=n){
			queue<int> q;
			if(k==1){
				u=1;
				k=2;
			}
			if(check[u]==0){
				check[u]=1;
				q.push(u);
				dem++;
			}
			while(q.size())
			{
				u=q.front();
				q.pop();
				for (int i = 0; i < a[u].size(); i++)
		        {
		            int v = a[u][i];
		            if (check[v]==0)
		            {
		                check[v] = 1;
		                q.push(v);
		            }
		        }
			}
			if(k==0) k=1;
			if(k==2) u++;
		}
		cs++;
		ds=min(ds,dem);	
	}
	cout<<ds;
}