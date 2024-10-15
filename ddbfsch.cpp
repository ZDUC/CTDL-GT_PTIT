#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, u,d, x, y,c=0;
        cin>>n>>m>>u>>d;
        vector<vector<int>> a(n + 1);
        vector<int> ds;
        int z[n+1]={0};
        int check[n+1]={0};
        while(m--)
        {
        	cin>>x>>y;
        	a[x].push_back(y);
		}
		for (int i = 1; i <= n; i++) sort(a[i].begin(), a[i].end());
		queue<int> q;
		check[u]=1;
		z[u]=-1;
		q.push(u);
		while(!q.empty()){
			u=q.front();
			q.pop();
			for(int i=0;i<a[u].size();i++){
				int v=a[u][i];
				if(check[v]==0){
					check[v]=1;
					q.push(v);
					z[v]=u;
					if(v==d){
						c=1;
						break;
					}
				}
			}
			if(c==1) break;
		}
		if(c==0){
			cout<<-1<<endl;
			continue;
		}
		int p=d;
		while(p!=-1){
			ds.push_back(p);
			p=z[p];
		}
		for(int i=ds.size()-1;i>=0;i--) cout<<ds[i]<<" ";
		cout<<endl;
	}
}